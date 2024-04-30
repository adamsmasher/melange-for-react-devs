type t = list(Item.t);

module OrderItem = {
  [@mel.module "./order-item.module.css"]
  external css: Js.t({..}) = "default";

  [@react.component]
  let make = (~item: Item.t) =>
    <tr className=css##item>
      <td className=css##emoji> {item |> Item.toEmoji |> React.string} </td>
      <td className=css##price> {item |> Item.toPrice |> Format.currency} </td>
    </tr>;
};

[@mel.module "./order.module.css"] external css: Js.t({..}) = "default";

[@react.component]
let make = (~items: t, ~onClose: unit => unit) => {
  let total =
    items
    |> ListLabels.fold_left(~init=0., ~f=(acc, order) =>
         acc +. Item.toPrice(order)
       );

  <div>
    <table className=css##order>
      <tbody>
        {items
         |> List.mapi((index, item) =>
              <OrderItem key={"item-" ++ string_of_int(index)} item />
            )
         |> Stdlib.Array.of_list
         |> React.array}
        <tr className=css##couponCode>
          <td> {React.string("Coupon code")} </td>
          <td> <input className=css##couponCodeInput /> </td>
        </tr>
        <tr className=css##total>
          <td> {React.string("Total")} </td>
          <td> {total |> Format.currency} </td>
        </tr>
      </tbody>
    </table>
    <div>
      <button onClick={_ => onClose()}> {RR.s({js|⬅️|js})} </button>
    </div>
  </div>;
};

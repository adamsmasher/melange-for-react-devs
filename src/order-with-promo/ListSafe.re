/** Return the nth element encased in Some; if it doesn't exist, return None */
let nth = (n, list) => n < 0 ? None : List.nth_opt(list, n);

/** Take a list of strings and return a human-readable string */
let humanize =
  fun
  | [] => ""
  | [x] => x
  | [x, y] => x ++ " and " ++ y
  | [first, ...rest] =>
    rest
    |> List.rev
    |> List.mapi((i, s) => i == 0 ? "and " ++ s : s)
    |> List.rev
    |> List.fold_left((acc, s) => acc ++ ", " ++ s, first);

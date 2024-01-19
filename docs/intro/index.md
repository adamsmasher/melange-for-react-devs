# Melange for React Developers

::: warning

This is a work in progress.

:::

::: info

The content here targets [Melange
v3](https://docs.google.com/document/d/1q9NWiXun_Lqgv5iNNYm2SKzUGGJ02FpRawKUiTxnJPI/edit#heading=h.9je9ws3oydaz),
so if you are using Melange v2, a few things might not work quite the same.

:::

## Motivation

This is a project-based, guided introduction to Melange and its ecosystem.
Because Melange uses both OCaml and JavaScript ecosystems, there are quite a few
tools and concepts to learn. Therefore we try to make each chapter small and
digestible, not introducing too many things at once.

## Audience

You should already know how to make frontend applications in JavaScript, in
particular with [React](https://react.dev/). You should be interested in
learning how to leverage your existing knowledge to build apps using
[ReasonReact](https://reasonml.github.io/reason-react/). You do not need to know
OCaml[^1]---we'll slowly introduce the basics of the language throughout the
tutorial. That said, a good complement to this guide is [OCaml Programming:
Correct + Efficient + Beautiful](https://cs3110.github.io/textbook/), which
teaches the language from the ground up and goes much deeper into its features.

## Chapters and topics

| Title  | Summary | Topics covered |
| ------ | ------- | -------------- |
| Counter | Number that can be incremented or decremented | module, Option, `React.string`, pipe last operator, function chaining, switch expression |
| Numberic Types | Use Melange Playground to explore OCaml’s numeric types | Int, Float, Playground, sharing snippets, comparison operators, arithmetic operators, widgets in Playground |
| Celsius Converter | Single input that converts from  Celsius to Fahrenheit | `Js.t` object, string concatenation (`++`), exception handling, ternary expression, if-else expression, labeled argument, partial application |
| Celsius Converter using Option | The same component from the last chapter but replacing exception handling with Option | Option, `Option.map`, `when` guard |
| Introduction to Dune | A introduction to the Dune build system | `dune-project` file, `dune` file, `melange.emit` stanza, `Makefile`, monorepo structure |
| Order Confirmation | An order confirmation for a restaurant website | variant type, primary type of module (`t`), wildcard (`_`) in switch, `fun` syntax, `Js.Array` functions, `React.array`, type transformation functions |
| Styling with CSS | Styling the order confirmation using CSS | `mel.raw` extension node, `runtime_deps` field, `glob_files` term, `external`, `mel.module` attribute |

...and much more to come!

[^1]:
    Because of the focus on ReasonReact, we won't cover traditional OCaml
    syntax in this guide. Instead, we'll cover the [Reason
    syntax](https://reasonml.github.io/) which works great with ReasonReact
    because of its first-class support for JSX.

(*
 * OWL - an OCaml numerical library for scientific computing
 * Copyright (c) 2016-2017 Liang Wang <liang.wang@cl.cam.ac.uk>
 *)


let eval cmd = cmd
  |> Lexing.from_string
  |> !Toploop.parse_toplevel_phrase
  |> Toploop.execute_phrase true Format.std_formatter
  |> ignore


let () =
  eval "
    #install_printer Owl.Mat.pp_dsmat;;
    #install_printer Owl.Dense.Ndarray.Generic.pp_dsnda;;
    #install_printer Owl.Dense.Matrix.Generic.pp_dsmat;;
    #install_printer Owl.Sparse.Ndarray.Generic.pp_spnda;;
    #install_printer Owl.Sparse.Matrix.Generic.pp_spmat;;
  "
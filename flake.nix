{
  description = "A very basic flake";

  inputs = {
    flake-utils.url = "github:numtide/flake-utils";
    flake-compat = {
      url = "github:edolstra/flake-compat";
      flake = false;
    };
  };

  outputs = { self, flake-utils, flake-compat, nixpkgs }: flake-utils.lib.eachDefaultSystem (system:
  let
    pkgs = import nixpkgs { inherit system; };
  in {
    defaultPackage = pkgs.hello;
    devShell = pkgs.mkShell {
        inputsFrom = [ ];
        packages = with pkgs; [
          cargo
          nodejs
          clippy
          rustc
          rustfmt
          tree-sitter
        ];
        hardeningDisable = [ "all" ];
      };
    });
}

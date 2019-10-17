# UpperLowerBounds

A calculator for basic geometric formulas. Project idea came from from supposedly a challenge, for my math class.

## Getting Started

Binaries can be found in the relase tab.

The following instructions are for compiling from sources.

### Prerequisities

#### Using ```nix```:

To install dependencies/tools/libraries, the easy way (using nix):

    ```s
    nix-shell
    ```

    And you will get a shell with the appropiate requirements to build the project.

#### Using ```Ubuntu```:

    ```s
    sudo apt install build-essential cmake gcc qt5-default
    ```
#### Using ```arch```:

    ```s
    pacman -S gcc make cmake qt5-base
    ```

#### Using ```gentoo```:

    ```s
    sudo emerge --ask sys-devel/gcc sys-devel/make dev-qt
    ```

### Compiling

    To compile test cases(Debug):

        ```s
        ./build.sh
        ```

        To compile test cases(Release):

            ```s
            ./buildRelease.sh
            ```

            To cross-compile for windows test cases(Debug):

                ```s
                ./buildWin32.sh
                ```

                To compile test cases(Release):

                    ```s
                    ./buildWin32Release.sh
                    ```

                    To compile gui(Debug):

                        ```s
                        ./buildGui.sh
                        ```

                        To compile gui(Release):

                            ```s
                            ./buildGuiRelease.sh
                            ```

### Running the Tests

                            ```s
                            ./runTests.sh
                            ```

## License

                            This project is licensed under the MIT License.

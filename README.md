Configurable Makefile
=====================

[![Download](https://img.shields.io/badge/download-master_branch-blue.svg?style=flat&logo=github&logoColor=white)](https://github.com/VaSe7u/ConfigurableMakefile/archive/master.zip)
[![License](https://img.shields.io/badge/license-MIT-lightgrey.svg)](https://opensource.org/licenses/mit-license.php)

*Configurable Makefile for compiling executable and library projects, natively and for AVR.*


Table of Contents
-----------------
 - [Prerequisites](#prerequisites)
 - [Installing](#installing)
   + [GCC and Make](#gcc-and-make)
   + [Configurable Makefile](#configurable-makefile-1)
 - [Configuring the *`Makefile`*](#configuring-the-makefile)
 - [Commands](#commands)
 - [License](#license)

Prerequisites
-------------
 - GCC
 - Make


Installing
----------
### GCC and Make
#### Windows:
 - Download [MinGW][mingw_home] or [CygWin][cygwin_home].
 - Install it and add the path of the *`.../bin/`* folder to the environment variable "Path".
 
*When using MinGW, "make" is named "mingw32-make".*

---

### Configurable Makefile
#### New executable native project:
 - [Download the repository][download_repo]
 - Copy the 'Makefile' from the root of the repository to a new folder.
 - Run `make init` to initialize the folder structure.
 - Place your source files inside *`.../<project_name>/src/`*.
 - Run `make`.

#### "Native project" example:
 - [Download the repository][download_repo].
 - Run `make init` inside *`.../ConfigurableMakefile/examples/Native project`* to initialize the folder structure.
 - Do the same inside *`.../ConfigurableMakefile/examples/Native project/deps/Ext1`* and *`.../ConfigurableMakefile/examples/Native project/deps/Ext2`*, these are separate library projects and dependencies of "Native project" example.
 - Run `make deps` inside *`.../ConfigurableMakefile/examples/Native project`* to "make" the dependencies.
 - And finally run `make` to "make" the example project.

#### "AVR project" example:
 - [Download the repository][download_repo].
 - In *`.../ConfigurableMakefile/examples/AVR project/Makefile`* edit the variables: `MCU`, `F_CPU`, `UPLOADER`, `PROGRAMMER`, `PORT`...
 - Run `make init` inside *`.../ConfigurableMakefile/examples/AVR project`* to initialize the folder structure.
 - Run `make` to "make" the example project
 - And finally run `make program` to upload it to an AVR target.


Configuring the *`Makefile`*
----------------------------
See the instructions inside *`Makefile`*.


Commands
--------
### All

| Command                            | Description                                                                                    | Native executable      | AVR executable         | Library                          |
| ---------------------------------- | ---------------------------------------------------------------------------------------------- | ---------------------- | ---------------------- | -------------------------------- |
| `make init`                        | creates folders for the project based on the user configuration                                |                        |                        |                                  |
| `make`                             | compiles and...                                                                                | links to an executable | links to an executable | creates a static library archive |
| `run`                              | runs the executable                                                                            |                        | *disabled*             | *disabled*                       |
| `make all`                         | in addition to `make` compiles and runs the tests and generates the documentation              |                        |                        |                                  |
| `make ObjectDump`                  | extracts information from the linked object into *`(TARGET).lss`* file                         |                        |                        | *disabled*                       |
| `make SymbolTable`                 | extracts symbol table from the linked object into *`(TARGET).sym`* file                        |                        |                        | *disabled*                       |
| `make deps`                        | "makes" all static library dependencies                                                        |                        |                        |                                  |
| `make <STATIC_LIBRARY_NAME>`       | "makes" the specified static library                                                           |                        |                        |                                  |
| `make tests`                       | compiles and runs the tests                                                                    |                        |                        |                                  |
| `make docs`                        | generates the documentation                                                                    |                        |                        |                                  |
| `make clean`                       | cleans the project generated files                                                             |                        |                        |                                  |
| `make clean_all`                   | in addition to `clean` also "cleans" the dependencies                                          |                        |                        |                                  |
| `make clean_<STATIC_LIBRARY_NAME>` | cleans the specified static library                                                            |                        |                        |                                  |

### AVR only

| Command                            | Description                                                                                    | Native executable      | AVR executable         | Library                          |
| ---------------------------------- | ---------------------------------------------------------------------------------------------- | ---------------------- | ---------------------- | -------------------------------- |
| `make program`                     | links to an executable, converts the executable to ihex format and writes it to the target AVR | *disabled*             |                        | *disabled*                       |
| `make program_flash`               | *same as `make program`*                                                                       | *disabled*             |                        | *disabled*                       |
| `make download_flash`              | reads the AVR's flash into a file                                                              | *disabled*             |                        | *disabled*                       |
| `make program_eeprom`              | `make program` but only writes the EEPROM                                                      | *disabled*             |                        | *disabled*                       |
| `make download_eeprom`             | reads the AVR's eeprom into a file                                                             | *disabled*             |                        | *disabled*                       |
| `make program_fuses`               | writes the configured fuse settings to the target AVR                                          | *disabled*             |                        | *disabled*                       |
| `make download_fuses`              | reads the AVR's fuses into files                                                               | *disabled*             |                        | *disabled*                       |
| `make <TARGET>.hex`                | compiles, links and converts to ihex                                                           | *disabled*             |                        | *disabled*                       |
| `make <TARGET>.eep`                | compiles, links and converts to ihex (just the .eeprom section)                                | *disabled*             |                        | *disabled*                       |


License
-------
The MIT License (MIT)

Copyright (c) 2019 Vasil Kalchev

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

[download_repo]: https://github.com/VaSe7u/ConfigurableMakefile/archive/master.zip
[download_makefile]: https://raw.githubusercontent.com/VaSe7u/ConfigurableMakefile/master/Makefile
[gnuwin32_make]: http://gnuwin32.sourceforge.net/packages/make.htm
[mingw_home]: http://www.mingw.org/
[cygwin_home]: https://www.cygwin.com/

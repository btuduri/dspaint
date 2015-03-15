# Introduction #

This page tells you how we like out code to be done.

# Source Files #

  * Source files and folder names begin with an uppercase letter.
  * Source files either have the extension .cpp/.h depending on whether they are source/header files.
  * Guards in header files shall be the class name in block caps suffixed with underscoreH.

# Constants #

  * Constants will always be in BLOCK CAPS with underscores for spaces.
  * They are always prefixed with an identifier followed by an underscore.
  * Constants relating to the DS will are prefixed with NDS.
  * Constants relating to DS Paint will are prefixed with DSP.

# Methods #

  * Methods should have a comment block above describing the purpose of the method, parameters and return type. Exceptions that can be thrown should also be listed.
  * Method names use Pascal casing.

# Syntax #

  * Private variables use Camel casing.
  * Curly brackets for code blocks should be on their own line, like this:
```
  Foo()
  {
    bar();
  }
```
  * Single-line code blocks should either use curly brackets, like this:
```
  if (foo == 0)
  {
    bar = 1;
  }
```
> ... or be on the same line, like this:
```
  if (foo == 0) bar = 1;
```
  * Methods which take more than 3 parameters should use a seperate line for each parameter, like this:
```
  void Foo()
  {
    method (
      parameter1,
      parameter2,
      parameter3,
      parameter4,
    );
  }
```
  * Tabs will be used for indentation at the start.
  * Spaces will be used for indentation at the end.
  * Each file may only contain 1 class.
  * Each file must end with a trailing blank line.
  * Interfaces are prefixed with 'I'.
  * Pointer operators prefix the variable name, like this:
```
  int *num;
```
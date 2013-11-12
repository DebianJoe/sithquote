sithquote
=========

Seeded quote generation with alternating escape codes, hardcore edition.

Installation
=========
If you're going to use a custom quote file, after downloading, edit the "dir" variable to match the full path to the file that you wish to have it read.  It will pick a pseudo-random LINE (so newlines will be read as seprate items) and use it.  Beyond that, compile with your favorite c compiler and use.

Usage
=========
assuming that your binary is called "sithquote"
```
sithquote
```
Will start a localized loop.  If you type in text and press 'enter' it will colorize the previously typed sentence.  This is best used for piping other output into.  (for example "fortune | sithquote").  

```
sithquote -a
````
The -a switch will direct the program to pick a random line from the file specified in the source as "dir".  It will clear the terminal, and colorize this line as output.  

```
sithquote -q
```
The namesake of the program is shown by the -q switch.  This will pick a pseudo-random quote from a sith lord, and provide it for you in a colorful fashion like the -a switch.  

```
sithquote -c "My totally awesome string"
```
The -c switch allows the user to feed the clear/colorizing part of the program a customized string directly from the command line.

License
======
wtfpl <DebianJoe@linuxbbq.org> (Do whatever you want with it...but I'm not reponsible for anything that it breaks/anything that you break/etc.)

# Progressbar-in-C
Progressbar Using C with ANSI Color Codes and UTF

This project was an experiment using ANSI Color Escape Codes
https://gist.github.com/fnky/458719343aabd01cfb17a3a4f7296797<br>
and Printing UTF special characters
https://gist.github.com/ivandrofly/0fe20773bd712b303f78

## To Run:
Compile progressbar.cc. 
For me 'gcc progressbar.cc'<br>
Run the resulting output file.
For me './a.out'

## For your experiments:
You can change the color of your terminal string using "\x1b["
followed by your desired foregroud color<br>
and background color seperated 
by ";"

E.G.
"\x1b[31m%s\x1b[0m"

Print red a foreground "\x11b[31m"
And then reset "\x1b[0m" to the default settings


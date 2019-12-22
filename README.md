# example_rootcling

Build with `make all`.

Then try with: 
```
root -l 
> gROOT->ProcessLine(".L libMyLib.so")
> example::ExampleClass e
```

Requires:
 - ROOT (using v6.12.06)
 - numpy (using v1.15.4)

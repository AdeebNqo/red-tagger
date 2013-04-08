red-tagger
==========

This is a program that allows you to tag multiple files. It is great to use if you do not want to write a script
and you use file sharing services. It allows you to customize where the tag should be placed. It also has an undo function.


Usage (of `tagger.cpp` class)
==========

        tagger my_tagger("/home/user/P2P","testTag");
        my_tagger.start();

The above source code is available in `main.cpp` to illustrate how one would
use the class: `tagger.cpp`

This tags files located at the given path (including subfolders) with the tag "testTag".

Application
-----------
The Qt Creator project is located in the folder: ***tagger***

This project is the application which comes ith a Graphical user interface. It also has additional features such **tag subfolders, undo tag**.

Progress
--------
The following things are yet to be implemented

- undo function (version 1 : uses temporary text file)

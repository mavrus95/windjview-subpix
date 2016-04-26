# Welcome! #

**WinDjView-subpix** is a high quality DjVu viewer for Windows, optimized for viewing on LCD screens.

The viewer has sub-pixel rendering capability, similar to CoolType or ClearType technologies. It can render any type of material - b/w text, color text, line-art, diagrams, images etc.

It is based on WinDjView, which is a fast, compact and powerful DjVu viewer for Windows with tabbed interface, continuous scrolling and advanced printing options, based on free DjVuLibre library.

I'd love to hear your opinion on this software!

Larry (lrrdavis0@gmail.com)

# Sub-pixel rendering #

![http://windjview-subpix.googlecode.com/svn/wiki/comparison_text_zoom_x4.png](http://windjview-subpix.googlecode.com/svn/wiki/comparison_text_zoom_x4.png)

(**top**: WinDjView, **bottom**: WinDjView-subpix)

# Screenshot #

![http://windjview-subpix.googlecode.com/svn/wiki/screenshot.png](http://windjview-subpix.googlecode.com/svn/wiki/screenshot.png)

# Comparisons #

### Sub-pixel rendering of text ###
![http://windjview-subpix.googlecode.com/svn/wiki/comparison_text.png](http://windjview-subpix.googlecode.com/svn/wiki/comparison_text.png)

(**top**: WinDjView, **bottom**: WinDjView-subpix)

### Sub-pixel rendering of line-art ###

![http://windjview-subpix.googlecode.com/svn/wiki/comparison_mixed.png](http://windjview-subpix.googlecode.com/svn/wiki/comparison_mixed.png)

(**top**: WinDjView, **bottom**: WinDjView-subpix)

# Installation Instructions #

  * run [WinDjView-subpix-1.0.3-r20-Setup.exe](http://windjview-subpix.googlecode.com/files/WinDjView-subpix-1.0.3-r20-Setup.exe)
  * (optional) accept it as the default viewer for DjVu files
  * **important!** enable sub-pixel rendering in the settings dialog:

![http://windjview-subpix.googlecode.com/svn/wiki/settings.png](http://windjview-subpix.googlecode.com/svn/wiki/settings.png)
![http://windjview-subpix.googlecode.com/svn/wiki/settings_ru.png](http://windjview-subpix.googlecode.com/svn/wiki/settings_ru.png)

# Source Code #

The source code is available here:
http://code.google.com/p/windjview-subpix/source/checkout

For the curious: the major change was done in the scaling function. Instead of resampling RGB on the same grid, each color is resampled separately, with 1/3 pixel offset between the color planes. Technically, I've replicated the original resampling function 3 times (one for each color plane), each time starting with a different partial-pixel offset. Here is the diff:

http://code.google.com/p/windjview-subpix/source/diff?spec=svn5&r=5&format=side&path=/trunk/Scaling.cpp
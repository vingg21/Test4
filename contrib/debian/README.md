
Debian
====================
This directory contains files used to package retrexd/retrex-qt
for Debian-based Linux systems. If you compile retrexd/retrex-qt yourself, there are some useful files here.

## retrex: URI support ##


retrex-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install retrex-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your retrexqt binary to `/usr/bin`
and the `../../share/pixmaps/retrex128.png` to `/usr/share/pixmaps`

retrex-qt.protocol (KDE)


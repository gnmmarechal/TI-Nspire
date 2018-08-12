This repository is licensed under the GNU General Public License, version 3, with the following addendum which overrides all conflicting provisions in the GPL:

You MAY NOT use, advertise, or otherwise mention this code, or any derivative of it, in connection with any of the following prohibited actions:

* Circumventing rules intended to protect the integrity of examinations, including but not limited to:
  - Disabling or bypassing exam mode, including enabling access to documents created outside of exam mode while in exam mode
  - Controlling the calculator's exam mode LEDs in a manner inconsistent with the behavior of the original exam mode, or enabling them while not in exam mode
  - Enabling access to an unofficial program loader such as Ndless in exam mode
* Hiding or obscuring in any way the fact that the CAS operating system is running on a non-CAS calculator, including but not limited to:
  - Removing the word "CAS" from the home screen and the HOME > Settings > Status screen

All derivatives of the code in the "boot1.5_exploit" folder MUST do the following at every boot:

* If a CAS OS is running on a non-CAS calculator, display the unmodified image contained in "caswarning.h" for no less than five seconds. (Modification of the image is allowed for translating the text in the image to other languages.)
* Disallow switching between CAS and non-CAS OSes while in exam mode and/or while the calculator is not connected to a computer.

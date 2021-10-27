# RE_RSZ
010 Editor Binary Template for editing RE Engine game files contiaining "RSZ" data.
Uses a DLL and large JSON files to know how to parse the structures of each game.

Currently works for RE8, RE3 and DMC5

# Installation / Usage
1. Download via "Code -> Download as ZIP"
2. Extract all to the same folder
3. In 010 Editor, Templates -> View Installed Templates
4. Install the bt file
5. Open any SCN, PFB, USER, RCOL, FSMV2, MOTFSM, or BHVT file with 010

# Credits
* praydog, for making the RSZ JSON dumps
* Darkness, for making the RSZparser.DLL

# Research
For information on how the dumps were made, refer to [REFramework](https://github.com/praydog/REFramework/tree/master/reversing/rsz).

The RSZ Parser uses a DLL made by Darkness to quickly get the correct data from the JSON dumps. You can find the source code for that at https://github.com/amir-120/RSZParser

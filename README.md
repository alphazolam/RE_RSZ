# RE_RSZ
010 Editor Binary Template for editing RE Engine game files contiaining "RSZ" data.
Uses a DLL and large JSON files to know how to parse the structures of each game.

# Supported Games:
- Apollo Justice: Ace Attorney Trilogy
- Dead Rising Deluxe Remaster
- Devil May Cry 5
- Dragon's Dogma 2
- Ghost Trick
- Monster Hunter: Rise
- Resident Evil 2 Remake [NonRT] | [RT]
- Resident Evil 3 Remake [NonRT] | [RT]
- Resident Evil 4 Remake
- Resident Evil 7 [NonRT] | [RT]
- Resident Evil Re:Verse
- Resident Evil Village
- Street Fighter 6

# Installation / Usage
1. Download via "Code -> Download as ZIP"
2. Extract all to the same folder
3. In 010 Editor, Templates -> View Installed Templates
4. Install the bt file
5. Make sure that the file you are attempting to run the template on includes the game's name in its path
6. Open any SCN, PFB, USER, RCOL, FSMV2, MOTFSM, or BHVT file with 010

# Credits
* praydog, for making the RSZ JSON dumps
* Darkness, for making the RSZparser.DLL

# Research
For information on how the dumps were made, refer to [REFramework](https://github.com/praydog/REFramework/tree/master/reversing/rsz).

The RSZ Parser uses a DLL made by Darkness to quickly get the correct data from the JSON dumps. You can find the source code for that at https://github.com/amir-120/RSZParser

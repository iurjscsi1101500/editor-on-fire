#ifndef EOF_DR_H
#define EOF_DR_H

#include "song.h"

int eof_export_drums_rock_track_diff(EOF_SONG * sp, unsigned long track, unsigned char diff);
	//Exports Drums Rock files for the specified drum track difficulty in a subfolder of the project folder

unsigned char eof_reduce_drums_rock_note_mask(unsigned char note);
	//For the specified Drums Rock layout note bitmask, filters it down to a maximum of two gems suitable to export to Drums Rock format

unsigned long eof_get_note_name_as_number(EOF_SONG * sp, unsigned long track, unsigned long notenum);
	//Examines the specified note's name, if defined, and returns it as an unsigned long
	//Returns 0 if the number could not be parsed or if the name is not defined

int eof_check_drums_rock_track(EOF_SONG * sp, unsigned long track);
	//Performs various Drums Rock related quality checks on the specified track and prompts the user whether to cancel save and seek to/highlight issues
	// If the user opts to cancel project save, nonzero is returned, otherwise zero is returned

#endif // header guard


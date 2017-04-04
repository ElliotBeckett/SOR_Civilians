#define Author_Macro author=$STR_AUTHOR_FULL;

#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}
#define pack_xx(a,b) class _xx_##a {backpack = a; count = b;}

#define STD_Equipment "ItemMap",\
							"ItemCompass",\
							"ItemWatch",

#define Standard_Meds   "ACE_fieldDressing",\
						"ACE_fieldDressing",\
						"ACE_fieldDressing",\
						"ACE_fieldDressing",\
						"ACE_fieldDressing",\
						"ACE_fieldDressing",\
						"ACE_fieldDressing",\
						"ACE_fieldDressing",\
						"ACE_morphine",\
						"ACE_morphine",\
						"ACE_morphine",\
						"ACE_EarPlugs"
						

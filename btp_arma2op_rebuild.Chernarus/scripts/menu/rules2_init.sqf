disableSerialization;
///////////////////
//////Config//////
/////////////////

_rule1title = "Rule #1 Title"; //Text that will be the title of rule #1
_rule1text = "testing"; //Text that will go in rule # 1 Box, maximum of maximum of Approx 300 characters

_rule2title = "Rule #2 Title"; //Text that will be the title of rule #2
_rule2text = "page"; //Text that will go in rule # 2 Box, maximum of maximum of Approx 300 characters

_rule3title = "Rule #3 Title"; //Text that will be the title of rule #3
_rule3text = "two"; //Text that will go in rule # 3 Box, maximum of maximum of Approx 300 characters

_rule4title = "Rule #4 Title"; //Text that will be the title of rule #4
_rule4text = "Rule"; //Text that will go in rule # 4 Box, maximum of maximum of Approx 300 characters

_rule5title = "Rule #5 Title"; //Text that will be the title of rule #5
_rule5text = "Rule"; //Text that will go in rule # 5 Box, maximum of maximum of Approx 300 characters

nexts2cript = {((ctrlParent (_this select 0)) closeDisplay 7779); execvm 'custom\menu\rules3_init.sqf';}; //script that Next button will use 
previous2script = {((ctrlParent (_this select 0)) closeDisplay 7779); execvm 'custom\menu\rules_init.sqf';}; //script that previous button will use


createDialog "rules2";


////////////////////////////////
//DO NOT EDIT BELLOW THIS LINE//
////////////////////////////////


fnc_update_all_text = {
_finddialog = findDisplay 7779;
(_finddialog displayCtrl 1001) ctrlSetText format["%1",_rule1title];
(_finddialog displayCtrl 1100) ctrlSetText format["%1",_rule1text];
(_finddialog displayCtrl 1002) ctrlSetText format["%1",_rule2title];
(_finddialog displayCtrl 1101) ctrlSetText format["%1",_rule2text];
(_finddialog displayCtrl 1003) ctrlSetText format["%1",_rule3title];
(_finddialog displayCtrl 1102) ctrlSetText format["%1",_rule3text];
(_finddialog displayCtrl 1004) ctrlSetText format["%1",_rule4title];
(_finddialog displayCtrl 1103) ctrlSetText format["%1",_rule4text];
(_finddialog displayCtrl 1005) ctrlSetText format["%1",_rule5title];
(_finddialog displayCtrl 1104) ctrlSetText format["%1",_rule5text];
};

call fnc_update_all_text;





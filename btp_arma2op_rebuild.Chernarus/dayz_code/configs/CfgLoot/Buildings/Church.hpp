class Church : Default
{
	zombieChance = 0.3;
	minRoaming = 1;
	maxRoaming = 3;
	zombieClass[] = {"z_priest","z_priest","z_priest"};
	
	lootChance = 1;
	lootGroup = Church;
};

class Land_Church_01 : Church
{
	zedPos[] =
	{
		{-6.92,-0.38,-4.21}
	};
	lootPos[] =
	{
		/*
		{-6.92,-0.38,-4.21},
		{-6.87,-0.44,-6.47},
		*/
		{-6.92822,0.516602,-4.2191}
	};
	lootPosSmall[] =
	{
		{-7.27332,-1.16895,-4.22726}
	};
};

class Land_Church_03 : Church
{
	zedPos[] =
	{
		{-0.0263672,-2.98438,-14.3021},
		{5.15332,-6.96875,-14.3021},
		{-6.56641,-4.58887,-14.3021},
		{-1.7915,-7.67969,-14.302},
		{5.38916,3.40527,-14.302},
		{5.49902,7.20508,-14.302},
		{-0.00341797,2.02539,-14.3019},
		{3.23633,2.76172,-14.3019},
		{-7.64111,4.81348,-14.3019},
		{-1.51074,7.66406,-14.2919},
		{9.93262,-3.85156,-13.7587},
		{9.55225,2.22461,-13.7487}
	};
	lootPos[] =
	{
		/*
		{5.15332,-6.96875,-14.3021},
		{-1.7915,-7.67969,-14.302},
		{-0.0263672,-2.98438,-14.3021},
		{-0.00341797,2.02539,-14.3019},
		{5.49902,7.20508,-14.302},
		{5.38916,3.40527,-14.302},
		{3.23633,2.76172,-14.3019},
		{-1.51074,7.66406,-14.2919},
		{-7.64111,4.81348,-14.3019},
		{-6.56641,-4.58887,-14.3021},
		{9.55225,2.22461,-13.7487},
		{9.93262,-3.85156,-13.7587},
		*/
		{-0.665527,-3.02832,-14.3021},
		{2.90771,3.07422,-14.3021},
		{9.75342,0.0117188,-13.7588},
		{4.74609,8.1582,-14.3021},
		{-2.41943,1.72168,-14.3049}	
	};
	lootPosSmall[] =
	{
		{-0.791992,2.21191,-13.7321},
		{2.93945,-1.59766,-13.7349},
		{6.21191,3.48535,-13.7321},
		{6.56787,-3.55176,-14.3021},
		{-0.741211,-8.75684,-14.3021},
		{-0.126465,5.94434,-14.3021},
		{-1.14893,-3.6416,-14.3021},
		{-2.71484,-1.56055,-13.7349}
	};
	hangPos[] = {{1.72168,-8.39771,-0.172569},{2.08838,-14.4236,-0.27536},{-13.7158,-10.4808,-0.795174},{-12.9072,-16.4105,-0.895065}};
};

class Land_Church_02 : Church
{
	maxRoaming = 2;
	zedPos[] =
	{
		{-11.1528,1.47168,-11.6733},
		{9.87158,-6.6582,-11.6733}
	};
	lootPos[] =
	{
		{-11.15,1.47,-11.67},
		{9.87,-6.66,-11.67},
		{-3.6,7.18,-11.68},
		{-1.09,-6.54,-11.68},
		{-3.24,-4.54,-11.68}
	};
};

class Land_Church_02a : Church
{
	maxRoaming = 2;
	zedPos[] =
	{
		{10.0615,-6.90723,-11.5681},
		{-11.043,0.833984,-11.5681}
	};
	lootPos[] =
	{
		{10.0615,-6.90723,-11.5681},
		{-11.043,0.833984,-11.5681}
	};
};

class Land_Church_05R : Church
{
	maxRoaming = 2;
	zedPos[] =
	{
		{15.7012,3.20898,-7.99365},
		{-2.32617,-2.29297,-7.99365},
		{8.19385,-1.83301,-7.99365},
		{-4.9165,-5.66113,-7.79202},
		{10.3711,9.00293,-7.78201}
	};
	lootPos[] =
	{
		{-2.33,-2.29,-7.99},
		{8.19,-1.83,-7.99},
		{15.7,3.21,-7.99},
		{10.37,9,-7.78},
		{-4.92,-5.66,-7.79},
		{5.49,7.9,-8},
		{3.32,-6.43,-8},
		{7.66,-6.82,-8},
		{-4.85,8.19,-8}
	};
};
//DZE ADDED BELOW
class land_kostelik_final_2122: Church {
	lootPos[] = {{5.41992,-3.45703,-5.57918},{-0.963379,4.74414,-5.57919},{1.09082,-2.79297,-5.57919},{-1.39063,-5.18555,-5.57918}};
};

class Land_A_Mosque_big_hq_EP1: Church {
	lootPos[] = {{4.06592,-6.90674,-9.31999},{5.25195,4.07666,-9.31999},{5.70264,7.5376,-4.04752},{-4.78857,-7.00684,-4.04753},{3.93262,9.41846,0.567287},{0.882324,-0.134766,-9.31999}};
};
class Land_A_Mosque_big_addon_EP1: Church {
	lootPos[] = {{-5.10791,-1.75098,-6.4124},{6.30908,-3.39795,-6.38554},{6.87109,2.81934,-6.38554},{2.14111,-4.38086,-6.35463},{4.86475,4.65576,-6.38554},{-4.72021,-10.5127,-1.15605}};
};

class Land_A_Mosque_big_wall_EP1: Church {
	lootPos[] = {{2.81543,3.9458,-2.02844},{-4.94531,3.60645,5.18165}};
};
class Land_A_Mosque_small_1_EP1: Church
{
	lootPos[] = {
		{ 2.45117,3.39063,-2.04604 },
		{ 0.183105,0.826172,-2.04605 },
		{ 6.66406,4.11719,-1.9437 },
		{ 0.49707,-1.33301,-1.69603 }};
};

class Land_A_Mosque_small_2_EP1: Church
{
	lootPos[] = {
		{ 1.33496,-0.726074,-2.48535 },
		{ -0.794922,-1.74414,-2.48538 }};
};

/*
	Name: 160th SOR Mod
	Author: Scooby
	Date: 08/12/16
	Description: cfgBrains.hpp	
*/

class CfgBrains
{
  class DefaultSoldierBrain
  {
	class Components
	{
		class AIBrainSuppressionComponent;
	};
  };
  
  class DefaultCivilianBrain;
  class DefaultAnimalBrain;
  
  class SORSoldierBrain : DefaultSoldierBrain
  {
    class Components : Components
    {	  
      class AIBrainSuppressionComponent : AIBrainSuppressionComponent
      {
	    // maximum level of suppression
		maxSuppression = 1.0;
		// decrease time from max level, worst for skill 0, best for skill 1
		worstDecreaseTime = 0.5;
		bestDecreaseTime = 0.1;
		// default suppression range, if not provided by ammo type
		SuppressionRange = 0.3;
		// weights of different danger causes
		CauseHitWeight = 1.0;
		CauseExplosionWeight = 0.15;
		CauseBulletCloseWeight = 0.05; // default 0.15
		// threshold to change behavior (use smoke grenades for example)
		SuppressionThreshold = 0.8;
      };
    };
  };
};
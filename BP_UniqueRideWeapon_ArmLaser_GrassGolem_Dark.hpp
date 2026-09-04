#ifndef UE4SS_SDK_BP_UniqueRideWeapon_ArmLaser_GrassGolem_Dark_HPP
#define UE4SS_SDK_BP_UniqueRideWeapon_ArmLaser_GrassGolem_Dark_HPP

class ABP_UniqueRideWeapon_ArmLaser_GrassGolem_Dark_C : public ABP_UniqueRideWeapon_ArmLaser_C
{

    void GetChargeEffect(TSubclassOf<class ABP_SkillEffect_GrassGolem_PartnerSkill_Charge_C>& ChargeEffect);
    void GetLaserEffect(TSubclassOf<class ABP_SkillEffect_GrassGolem_PartnerSkill_Laser_C>& LaserEffect);
}; // Size: 0x6FA

#endif

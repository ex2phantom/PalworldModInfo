#ifndef UE4SS_SDK_BP_Explosion_Penguin_Electric_HPP
#define UE4SS_SDK_BP_Explosion_Penguin_Electric_HPP

class ABP_Explosion_Penguin_Electric_C : public ABP_Explosion_RocketLauncher_C
{

    void GetEffectValue(int32& Value);
    void GetEffectType(EPalAdditionalEffectType& Effect);
    void GetWeaponAttackType(EPalAttackType& AttackType);
}; // Size: 0x328

#endif

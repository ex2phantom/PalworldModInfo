#ifndef UE4SS_SDK_BP_Action_Coop_RevivePlayer_Discovery_HPP
#define UE4SS_SDK_BP_Action_Coop_RevivePlayer_Discovery_HPP

class UBP_Action_Coop_RevivePlayer_Discovery_C : public UBP_Action_Coop_RevivePlayer_LookAtBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0188 (size: 0x8)
    class UNiagaraComponent* Niagra;                                                  // 0x0190 (size: 0x8)

    void OnFinishedFX(class UNiagaraComponent* PSystem);
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_Coop_RevivePlayer_Discovery(int32 EntryPoint);
}; // Size: 0x198

#endif

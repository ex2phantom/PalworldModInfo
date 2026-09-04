#ifndef UE4SS_SDK_BP_Action_Coop_RevivePlayer_Happy_HPP
#define UE4SS_SDK_BP_Action_Coop_RevivePlayer_Happy_HPP

class UBP_Action_Coop_RevivePlayer_Happy_C : public UBP_Action_Coop_RevivePlayer_LookAtBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0188 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0190 (size: 0x8)

    void OnLoaded_E871816A494E9292F846639AA5FF93F9(class UObject* Loaded);
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_Action_Coop_RevivePlayer_Happy(int32 EntryPoint);
}; // Size: 0x198

#endif

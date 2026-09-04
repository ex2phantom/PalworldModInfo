#ifndef UE4SS_SDK_BP_Action_CoopSliding_HPP
#define UE4SS_SDK_BP_Action_CoopSliding_HPP

class UBP_Action_CoopSliding_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    class UAnimMontage* PlayMontage;                                                  // 0x0168 (size: 0x8)

    void OnNotifyEnd_C248D0D64B3022146C41A69B3D804492(FName NotifyName);
    void OnNotifyBegin_C248D0D64B3022146C41A69B3D804492(FName NotifyName);
    void OnInterrupted_C248D0D64B3022146C41A69B3D804492(FName NotifyName);
    void OnBlendOut_C248D0D64B3022146C41A69B3D804492(FName NotifyName);
    void OnCompleted_C248D0D64B3022146C41A69B3D804492(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void OnMovementModeChanged(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    void TickAction(float DeltaTime);
    void Reset();
    void ExecuteUbergraph_BP_Action_CoopSliding(int32 EntryPoint);
}; // Size: 0x170

#endif

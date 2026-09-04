#ifndef UE4SS_SDK_ABP_Carbunclo_Implementation_HPP
#define UE4SS_SDK_ABP_Carbunclo_Implementation_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_74;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_75;                                                          // 0x000C (size: 0x8)
    FName __NameProperty_76;                                                          // 0x0014 (size: 0x8)
    FName __NameProperty_77;                                                          // 0x001C (size: 0x8)
    FName __NameProperty_78;                                                          // 0x0024 (size: 0x8)
    FName __NameProperty_79;                                                          // 0x002C (size: 0x8)
    FName __NameProperty_80;                                                          // 0x0034 (size: 0x8)
    FName __NameProperty_81;                                                          // 0x003C (size: 0x8)
    FName __NameProperty_82;                                                          // 0x0044 (size: 0x8)
    FName __NameProperty_83;                                                          // 0x004C (size: 0x8)
    FName __NameProperty_84;                                                          // 0x0054 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_85;                                         // 0x0060 (size: 0x20)
    TEnumAsByte<ERefPoseType> __ByteProperty_86;                                      // 0x0080 (size: 0x1)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0088 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0108 (size: 0x18)

}; // Size: 0x120

class UABP_Carbunclo_Implementation_C : public UPalAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06E0 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x06E8 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x06F0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_8;                                              // 0x06F8 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_8;                        // 0x0718 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_7;                                              // 0x07E0 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_7;                        // 0x0800 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_6;                                              // 0x08C8 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_6;                        // 0x08E8 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_5;                                              // 0x09B0 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_5;                        // 0x09D0 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_4;                                              // 0x0A98 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_4;                        // 0x0AB8 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_3;                                              // 0x0B80 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_3;                        // 0x0BA0 (size: 0xC8)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_2;                        // 0x0C68 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_2;                                              // 0x0D30 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_1;                        // 0x0D50 (size: 0xC8)
    FAnimNode_LookAt AnimGraphNode_LookAt;                                            // 0x0E20 (size: 0x250)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x1070 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x1090 (size: 0x20)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x10B0 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x10D0 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x1198 (size: 0x20)
    FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer;                          // 0x11B8 (size: 0xC8)
    FAnimNode_RefPose AnimGraphNode_LocalRefPose;                                     // 0x1280 (size: 0x10)
    FVector LookAtWorldLocation;                                                      // 0x1290 (size: 0x18)

    void UpperOverride(FPoseLink NativePose, FPoseLink ActionPose, FPoseLink& UpperOverride);
    void LookAtOverride(FPoseLink InPose, FVector LookAtWorldLocation, FPoseLink& LookAtOverride);
    void AimingOverride(FPoseLink DefaultPose, FRotator AimRotator, FPoseLink& AimingOverride);
    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Carbunclo_Implementation(int32 EntryPoint);
}; // Size: 0x12A8

#endif

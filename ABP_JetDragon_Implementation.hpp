#ifndef UE4SS_SDK_ABP_JetDragon_Implementation_HPP
#define UE4SS_SDK_ABP_JetDragon_Implementation_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_101;                                                         // 0x0004 (size: 0x8)
    FName __NameProperty_102;                                                         // 0x000C (size: 0x8)
    FName __NameProperty_103;                                                         // 0x0014 (size: 0x8)
    FName __NameProperty_104;                                                         // 0x001C (size: 0x8)
    float __FloatProperty_105;                                                        // 0x0024 (size: 0x4)
    bool __BoolProperty_106;                                                          // 0x0028 (size: 0x1)
    float __FloatProperty_107;                                                        // 0x002C (size: 0x4)
    bool __BoolProperty_108;                                                          // 0x0030 (size: 0x1)
    EAnimSyncMethod __EnumProperty_109;                                               // 0x0031 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_110;                             // 0x0032 (size: 0x1)
    FName __NameProperty_111;                                                         // 0x0034 (size: 0x8)
    FName __NameProperty_112;                                                         // 0x003C (size: 0x8)
    FName __NameProperty_113;                                                         // 0x0044 (size: 0x8)
    FName __NameProperty_114;                                                         // 0x004C (size: 0x8)
    FName __NameProperty_115;                                                         // 0x0054 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_116;                                        // 0x0060 (size: 0x20)
    FName __NameProperty_117;                                                         // 0x0080 (size: 0x8)
    FName __NameProperty_118;                                                         // 0x0088 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0090 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0110 (size: 0x18)

}; // Size: 0x128

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)
    float __FloatProperty_0;                                                          // 0x0008 (size: 0x4)
    float __FloatProperty_1;                                                          // 0x000C (size: 0x4)
    float __FloatProperty_2;                                                          // 0x0010 (size: 0x4)
    float __FloatProperty_3;                                                          // 0x0014 (size: 0x4)
    float __FloatProperty_4;                                                          // 0x0018 (size: 0x4)

}; // Size: 0x1C

class UABP_JetDragon_Implementation_C : public UPalAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06E0 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x06E8 (size: 0x1C)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0708 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0710 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_8;                                              // 0x0718 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_8;                        // 0x0738 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_7;                                              // 0x0800 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_7;                        // 0x0820 (size: 0xC8)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_2;      // 0x08E8 (size: 0x118)
    FAnimNode_Root AnimGraphNode_Root_6;                                              // 0x0A00 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_6;                        // 0x0A20 (size: 0xC8)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_1;      // 0x0AE8 (size: 0x118)
    FAnimNode_Root AnimGraphNode_Root_5;                                              // 0x0C00 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_5;                        // 0x0C20 (size: 0xC8)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace;        // 0x0CE8 (size: 0x118)
    FAnimNode_Root AnimGraphNode_Root_4;                                              // 0x0E00 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_4;                        // 0x0E20 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_3;                                              // 0x0EE8 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_3;                        // 0x0F08 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_2;                                              // 0x0FD0 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_2;                        // 0x0FF0 (size: 0xC8)
    FAnimNode_LookAt AnimGraphNode_LookAt_2;                                          // 0x10C0 (size: 0x250)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x1310 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x1330 (size: 0x20)
    FAnimNode_LookAt AnimGraphNode_LookAt_1;                                          // 0x1350 (size: 0x250)
    FAnimNode_LookAt AnimGraphNode_LookAt;                                            // 0x15A0 (size: 0x250)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x17F0 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_1;                        // 0x1810 (size: 0xC8)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x18D8 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x19A0 (size: 0x20)
    FVector2D LeaningVelocity;                                                        // 0x19C0 (size: 0x10)
    FVector2D LeaningVelocity;                                                        // 0x19D0 (size: 0x10)
    FVector2D LeaningVelocity;                                                        // 0x19E0 (size: 0x10)
    FVector LookAtWorldLocation;                                                      // 0x19F0 (size: 0x18)

    void SwimLeaningOverride(FPoseLink InPose_3, FVector2D LeaningVelocity, FPoseLink& SwimLeaningOverride);
    void WalkLeaningOverride(FPoseLink InPose_2, FVector2D LeaningVelocity, FPoseLink& WalkLeaningOverride);
    void FlyLeaningOverride(FPoseLink InPose_1, FVector2D LeaningVelocity, FPoseLink& FlyLeaningOverride);
    void CustomOverride(FPoseLink PrePose, FPalCustomAnimOverrideData CustomData, FPoseLink& CustomOverride);
    void AimingOverride(FPoseLink DefaultPose, FRotator AimRotator, FPoseLink& AimingOverride);
    void LookAtOverride(FPoseLink InPose, FVector LookAtWorldLocation, FPoseLink& LookAtOverride);
    void UpperOverride(FPoseLink NativePose, FPoseLink ActionPose, FPoseLink& UpperOverride);
    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_JetDragon_Implementation(int32 EntryPoint);
}; // Size: 0x1A08

#endif

#ifndef UE4SS_SDK_ABP_BlackGriffon_Implementation_HPP
#define UE4SS_SDK_ABP_BlackGriffon_Implementation_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_85;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_86;                                                          // 0x000C (size: 0x8)
    FName __NameProperty_87;                                                          // 0x0014 (size: 0x8)
    FName __NameProperty_88;                                                          // 0x001C (size: 0x8)
    float __FloatProperty_89;                                                         // 0x0024 (size: 0x4)
    bool __BoolProperty_90;                                                           // 0x0028 (size: 0x1)
    float __FloatProperty_91;                                                         // 0x002C (size: 0x4)
    bool __BoolProperty_92;                                                           // 0x0030 (size: 0x1)
    EAnimSyncMethod __EnumProperty_93;                                                // 0x0031 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_94;                              // 0x0032 (size: 0x1)
    FName __NameProperty_95;                                                          // 0x0034 (size: 0x8)
    FName __NameProperty_96;                                                          // 0x003C (size: 0x8)
    FName __NameProperty_97;                                                          // 0x0044 (size: 0x8)
    FName __NameProperty_98;                                                          // 0x004C (size: 0x8)
    FName __NameProperty_99;                                                          // 0x0054 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_100;                                        // 0x0060 (size: 0x20)
    FName __NameProperty_101;                                                         // 0x0080 (size: 0x8)
    FName __NameProperty_102;                                                         // 0x0088 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0090 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0110 (size: 0x18)

}; // Size: 0x128

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)
    float __FloatProperty_0;                                                          // 0x0008 (size: 0x4)

}; // Size: 0xC

class UABP_BlackGriffon_Implementation_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0358 (size: 0xC)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0368 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0370 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_8;                                              // 0x0378 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_8;                        // 0x0398 (size: 0xC8)
    FAnimNode_ControlRig AnimGraphNode_ControlRig;                                    // 0x0460 (size: 0x470)
    FAnimNode_IKRig AnimGraphNode_IKRig;                                              // 0x08D0 (size: 0x1E0)
    FAnimNode_Root AnimGraphNode_Root_7;                                              // 0x0AB0 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_7;                        // 0x0AD0 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_6;                                              // 0x0B98 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_6;                        // 0x0BB8 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_5;                                              // 0x0C80 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_5;                        // 0x0CA0 (size: 0xC8)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace;        // 0x0D68 (size: 0x118)
    FAnimNode_Root AnimGraphNode_Root_4;                                              // 0x0E80 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_4;                        // 0x0EA0 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_3;                                              // 0x0F68 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_3;                        // 0x0F88 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_2;                                              // 0x1050 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_2;                        // 0x1070 (size: 0xC8)
    FAnimNode_LookAt AnimGraphNode_LookAt_2;                                          // 0x1140 (size: 0x250)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x1390 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x13B0 (size: 0x20)
    FAnimNode_LookAt AnimGraphNode_LookAt_1;                                          // 0x13D0 (size: 0x250)
    FAnimNode_LookAt AnimGraphNode_LookAt;                                            // 0x1620 (size: 0x250)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x1870 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_1;                        // 0x1890 (size: 0xC8)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x1958 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x1A20 (size: 0x20)
    double __CustomProperty_PositionAlpha_foot_back_01_r_Goal_0C60C349427C3012EE64A49102BE70DE; // 0x1A40 (size: 0x8)
    double __CustomProperty_PositionAlpha_foot_back_01_l_Goal_0C60C349427C3012EE64A49102BE70DE; // 0x1A48 (size: 0x8)
    double __CustomProperty_PositionAlpha_foot_front_01_r_Goal_0C60C349427C3012EE64A49102BE70DE; // 0x1A50 (size: 0x8)
    double __CustomProperty_PositionAlpha_foot_front_01_l_Goal_0C60C349427C3012EE64A49102BE70DE; // 0x1A58 (size: 0x8)
    FVector2D LeaningVelocity;                                                        // 0x1A60 (size: 0x10)
    FVector LookAtWorldLocation;                                                      // 0x1A70 (size: 0x18)

    void FootIKOverride(FPoseLink InPose_0, FPoseLink& FootIKOverride);
    void SwimLeaningOverride(FPoseLink InPose_3, FVector2D LeaningVelocity, FPoseLink& SwimLeaningOverride);
    void WalkLeaningOverride(FPoseLink InPose_2, FVector2D LeaningVelocity, FPoseLink& WalkLeaningOverride);
    void FlyLeaningOverride(FPoseLink InPose_1, FVector2D LeaningVelocity, FPoseLink& FlyLeaningOverride);
    void CustomOverride(FPoseLink PrePose, FPalCustomAnimOverrideData CustomData, FPoseLink& CustomOverride);
    void AimingOverride(FPoseLink DefaultPose, FRotator AimRotator, FPoseLink& AimingOverride);
    void LookAtOverride(FPoseLink InPose, FVector LookAtWorldLocation, FPoseLink& LookAtOverride);
    void UpperOverride(FPoseLink NativePose, FPoseLink ActionPose, FPoseLink& UpperOverride);
    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_BlackGriffon_Implementation(int32 EntryPoint);
}; // Size: 0x1A88

#endif

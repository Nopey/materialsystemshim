// AUTOGENERATED BY preciseVTableToCPP.py
#pragma once

typedef int undefined;
typedef unsigned char uchar;
typedef unsigned int uint;
typedef unsigned short ushort;
typedef int dword;
typedef int ImageFormat;
typedef void * FuncDef181(char * , int * );
class IMaterialProxyFactory;
typedef void * FuncDef183(char * , int * );
typedef void * FuncDef184(char * , int * );
typedef dword MaterialThreadMode_t;
class MaterialSystem_Config_t;
class KeyValues;
class MaterialAdapterInfo_t;
class MaterialVideoMode_t;
typedef void FuncDef191(void);
typedef dword HDRType_t;
typedef void FuncDef185(void);
typedef void FuncDef186(void);
typedef void FuncDef187(int );
typedef void FuncDef188(int );
typedef dword RenderTargetSizeMode_t;
typedef dword MaterialRenderTargetDepth_t;
class IMaterial;
class MaterialSystem_SortInfo_t;
class MaterialLock_t__;
typedef dword MaterialContextType_t;
class IMatRenderContext;
typedef void FuncDef192(void);
class IFileList;
typedef dword long_long;
class IAsyncTextureOperationReceiver;
class IMaterialInternal;
typedef void * FuncDef189(char * , int * );
class IMesh;
class CPrimList;
typedef dword MaterialPrimitiveType_t;
typedef dword MaterialMatrixMode_t;
typedef dword Sampler_t;
typedef dword StandardTextureId_t;
typedef dword VertexTextureSampler_t;
class ShaderColorCorrectionInfo_t;
class IShader;

class IMaterialSystem{
public:
    virtual undefined Connect(FuncDef181 * param_1) = 0;
    virtual undefined Disconnect(void) = 0;
    virtual undefined QueryInterface(char * param_1) = 0;
    virtual undefined Init(void) = 0;
    virtual undefined Shutdown(void) = 0;
    virtual undefined Init(char * param_1, IMaterialProxyFactory * param_2, FuncDef183 * param_3, FuncDef184 * param_4) = 0;
    virtual undefined SetShaderAPI(char * param_1) = 0;
    virtual undefined SetAdapter(int param_1, int param_2) = 0;
    virtual undefined ModInit(void) = 0;
    virtual undefined ModShutdown(void) = 0;
    virtual undefined SetThreadMode(MaterialThreadMode_t param_1, int param_2) = 0;
    virtual undefined GetThreadMode(void) = 0;
    virtual undefined IsRenderThreadSafe(void) = 0;
    virtual undefined ExecuteQueued(void) = 0;
    virtual undefined GetHardwareConfig(char * param_1, int * param_2) = 0;
    virtual undefined UpdateConfig(bool param_1) = 0;
    virtual undefined OverrideConfig(MaterialSystem_Config_t * param_1, bool param_2) = 0;
    virtual undefined GetCurrentConfigForVideoCard(void) = 0;
    virtual undefined GetRecommendedConfigurationInfo(int param_1, KeyValues * param_2) = 0;
    virtual undefined GetDisplayAdapterCount(void) = 0;
    virtual undefined GetCurrentAdapter(void) = 0;
    virtual undefined GetDisplayAdapterInfo(int param_1, MaterialAdapterInfo_t * param_2) = 0;
    virtual undefined GetModeCount(int param_1) = 0;
    virtual undefined GetModeInfo(int param_1, int param_2, MaterialVideoMode_t * param_3) = 0;
    virtual undefined AddModeChangeCallBack(FuncDef191 * param_1) = 0;
    virtual undefined GetDisplayMode(MaterialVideoMode_t * param_1) = 0;
    virtual undefined SetMode(void * param_1, MaterialSystem_Config_t * param_2) = 0;
    virtual undefined SupportsMSAAMode(int param_1) = 0;
    virtual undefined GetVideoCardIdentifier(void) = 0;
    virtual undefined SpewDriverInfo(void) = 0;
    virtual undefined GetDXLevelDefaults(uint * param_1, uint * param_2) = 0;
    virtual undefined GetBackBufferDimensions(int * param_1, int * param_2) = 0;
    virtual undefined GetBackBufferFormat(void) = 0;
    virtual undefined SupportsHDRMode(HDRType_t param_1) = 0;
    virtual undefined AddView(void * param_1) = 0;
    virtual undefined RemoveView(void * param_1) = 0;
    virtual undefined SetView(void * param_1) = 0;
    virtual undefined BeginFrame(float param_1) = 0;
    virtual undefined EndFrame(void) = 0;
    virtual undefined Flush(bool param_1) = 0;
    virtual undefined SwapBuffers(void) = 0;
    virtual undefined EvictManagedResources(void) = 0;
    virtual undefined ReleaseResources(void) = 0;
    virtual undefined ReacquireResources(void) = 0;
    virtual undefined AddReleaseFunc(FuncDef185 * param_1) = 0;
    virtual undefined RemoveReleaseFunc(FuncDef186 * param_1) = 0;
    virtual undefined AddRestoreFunc(FuncDef187 * param_1) = 0;
    virtual undefined RemoveRestoreFunc(FuncDef188 * param_1) = 0;
    virtual undefined ResetTempHWMemory(bool param_1) = 0;
    virtual undefined HandleDeviceLost(void) = 0;
    virtual undefined ShaderCount(void) = 0;
    virtual undefined GetShaders(int param_1, int param_2, IShader * * param_3) = 0;
    virtual undefined ShaderFlagCount(void) = 0;
    virtual undefined ShaderFlagName(int param_1) = 0;
    virtual undefined GetShaderFallback(char * param_1, char * param_2, int param_3) = 0;
    virtual undefined GetMaterialProxyFactory(void) = 0;
    virtual undefined SetMaterialProxyFactory(IMaterialProxyFactory * param_1) = 0;
    virtual undefined EnableEditorMaterials(void) = 0;
    virtual undefined SetInStubMode(bool param_1) = 0;
    virtual undefined DebugPrintUsedMaterials(char * param_1, bool param_2) = 0;
    virtual undefined DebugPrintUsedTextures(void) = 0;
    virtual undefined ToggleSuppressMaterial(char * param_1) = 0;
    virtual undefined ToggleDebugMaterial(char * param_1) = 0;
    virtual undefined UsingFastClipping(void) = 0;
    virtual undefined StencilBufferBits(void) = 0;
    virtual undefined SuspendTextureStreaming(void) = 0;
    virtual undefined ResumeTextureStreaming(void) = 0;
    virtual undefined UncacheAllMaterials(void) = 0;
    virtual undefined UncacheUnusedMaterials(bool param_1) = 0;
    virtual undefined CacheUsedMaterials(void) = 0;
    virtual undefined ReloadTextures(void) = 0;
    virtual undefined ReloadMaterials(char * param_1) = 0;
    virtual undefined CreateMaterial(char * param_1, KeyValues * param_2) = 0;
    virtual undefined FindMaterial(char * param_1, char * param_2, bool param_3, char * param_4) = 0;
    virtual undefined IsMaterialLoaded(char * param_1) = 0;
    virtual undefined FirstMaterial(void) = 0;
    virtual undefined NextMaterial(ushort param_1) = 0;
    virtual undefined InvalidMaterial(void) = 0;
    virtual undefined GetMaterial(ushort param_1) = 0;
    virtual undefined GetNumMaterials(void) = 0;
    virtual undefined SetAsyncTextureLoadCache(void * param_1) = 0;
    virtual undefined FindTexture(char * param_1, char * param_2, bool param_3, int param_4) = 0;
    virtual undefined IsTextureLoaded(char * param_1) = 0;
    virtual undefined CreateProceduralTexture(char * param_1, char * param_2, int param_3, int param_4, ImageFormat param_5, int param_6) = 0;
    virtual undefined BeginRenderTargetAllocation(void) = 0;
    virtual undefined EndRenderTargetAllocation(void) = 0;
    virtual undefined CreateRenderTargetTexture(int param_1, int param_2, RenderTargetSizeMode_t param_3, ImageFormat param_4, MaterialRenderTargetDepth_t param_5) = 0;
    virtual undefined CreateNamedRenderTargetTextureEx(char * param_1, int param_2, int param_3, RenderTargetSizeMode_t param_4, ImageFormat param_5, MaterialRenderTargetDepth_t param_6, uint param_7, uint param_8) = 0;
    virtual undefined CreateNamedRenderTargetTexture(char * param_1, int param_2, int param_3, RenderTargetSizeMode_t param_4, ImageFormat param_5, MaterialRenderTargetDepth_t param_6, bool param_7, bool param_8) = 0;
    virtual undefined CreateNamedRenderTargetTextureEx2(char * param_1, int param_2, int param_3, RenderTargetSizeMode_t param_4, ImageFormat param_5, MaterialRenderTargetDepth_t param_6, uint param_7, uint param_8) = 0;
    virtual undefined BeginLightmapAllocation(void) = 0;
    virtual undefined EndLightmapAllocation(void) = 0;
    virtual undefined AllocateLightmap(int param_1, int param_2, int * param_3, IMaterial * param_4) = 0;
    virtual undefined AllocateWhiteLightmap(IMaterial * param_1) = 0;
    virtual undefined UpdateLightmap(int param_1, int * param_2, int * param_3, float * param_4, float * param_5, float * param_6, float * param_7) = 0;
    virtual undefined GetNumSortIDs(void) = 0;
    virtual undefined GetSortInfo(MaterialSystem_SortInfo_t * param_1) = 0;
    virtual undefined GetLightmapPageSize(int param_1, int * param_2, int * param_3) = 0;
    virtual undefined ResetMaterialLightmapPageInfo(void) = 0;
    virtual undefined ClearBuffers(bool param_1, bool param_2, bool param_3) = 0;
    virtual undefined GetRenderContext(void) = 0;
    virtual undefined SupportsShadowDepthTextures(void) = 0;
    virtual undefined BeginUpdateLightmaps(void) = 0;
    virtual undefined EndUpdateLightmaps(void) = 0;
    virtual undefined Lock(void) = 0;
    virtual undefined Unlock(MaterialLock_t__ * param_1) = 0;
    virtual undefined GetShadowDepthTextureFormat(void) = 0;
    virtual undefined SupportsFetch4(void) = 0;
    virtual undefined CreateRenderContext(MaterialContextType_t param_1) = 0;
    virtual undefined SetRenderContext(IMatRenderContext * param_1) = 0;
    virtual undefined SupportsCSAAMode(int param_1, int param_2) = 0;
    virtual undefined RemoveModeChangeCallBack(FuncDef192 * param_1) = 0;
    virtual undefined FindProceduralMaterial(char * param_1, char * param_2, KeyValues * param_3) = 0;
    virtual undefined GetNullTextureFormat(void) = 0;
    virtual undefined AddTextureAlias(char * param_1, char * param_2) = 0;
    virtual undefined RemoveTextureAlias(char * param_1) = 0;
    virtual undefined AllocateDynamicLightmap(int * param_1, int * param_2, int param_3) = 0;
    virtual undefined SetExcludedTextures(char * param_1) = 0;
    virtual undefined UpdateExcludedTextures(void) = 0;
    virtual undefined IsInFrame(void) = 0;
    virtual undefined CompactMemory(void) = 0;
    virtual undefined ReloadFilesInList(IFileList * param_1) = 0;
    virtual undefined AllowThreading(bool param_1, int param_2) = 0;
    virtual undefined FindMaterialEx(char * param_1, char * param_2, int param_3, bool param_4, char * param_5) = 0;
    virtual undefined DoStartupShaderPreloading(void) = 0;
    virtual undefined SetRenderTargetFrameBufferSizeOverrides(int param_1, int param_2) = 0;
    virtual undefined GetRenderTargetFrameBufferDimensions(int * param_1, int * param_2) = 0;
    virtual undefined GetDisplayDeviceName(void) = 0;
    virtual undefined CreateTextureFromBits(int param_1, int param_2, int param_3, ImageFormat param_4, int param_5, uchar * param_6) = 0;
    virtual undefined OverrideRenderTargetAllocation(bool param_1) = 0;
    virtual undefined NewTextureCompositor(int param_1, int param_2, char * param_3, int param_4, long_long param_5, KeyValues * param_6, uint param_7) = 0;
    virtual undefined AsyncFindTexture(char * param_1, char * param_2, IAsyncTextureOperationReceiver * param_3, void * param_4, bool param_5, int param_6) = 0;
    virtual undefined CreateNamedTextureFromBitsEx(char * param_1, char * param_2, int param_3, int param_4, int param_5, ImageFormat param_6, int param_7, uchar * param_8, int param_9) = 0;
    virtual undefined AddTextureCompositorTemplate(char * param_1, KeyValues * param_2, int param_3) = 0;
    virtual undefined VerifyTextureCompositorTemplates(void) = 0;
    virtual undefined GetCurrentMaterial(void) = 0;
    virtual undefined GetLightmapPage(void) = 0;
    virtual undefined GetLightmapWidth(int param_1) = 0;
    virtual undefined GetLightmapHeight(int param_1) = 0;
    virtual undefined GetLocalCubemap(void) = 0;
    virtual undefined ForceDepthFuncEquals(bool param_1) = 0;
    virtual undefined GetHeightClipMode(void) = 0;
    virtual undefined AddMaterialToMaterialList(IMaterialInternal * param_1) = 0;
    virtual undefined RemoveMaterial(IMaterialInternal * param_1) = 0;
    virtual undefined RemoveMaterialSubRect(IMaterialInternal * param_1) = 0;
    virtual undefined InFlashlightMode(void) = 0;
    virtual undefined CanUseEditorMaterials(void) = 0;
    virtual undefined GetForcedTextureLoadPathID(void) = 0;
    virtual undefined GetRenderCallQueue(void) = 0;
    virtual undefined UnbindMaterial(IMaterial * param_1) = 0;
    virtual undefined GetRenderThreadId(void) = 0;
    virtual undefined DetermineProxyReplacements(IMaterial * param_1, KeyValues * param_2) = 0;
    virtual undefined GetConfig(void) = 0;
    virtual undefined NoteAnisotropicLevel(int param_1) = 0;
    virtual undefined ReleaseShaderObjects(void) = 0;
    virtual undefined RestoreShaderObjects(FuncDef189 * param_1, int param_2) = 0;
    virtual undefined InEditorMode(void) = 0;
    virtual undefined IsInStubMode(void) = 0;
    virtual undefined ImageFormatInfo(ImageFormat param_1) = 0;
    virtual undefined GetMemRequired(int param_1, int param_2, int param_3, ImageFormat param_4, bool param_5) = 0;
    virtual undefined ConvertImageFormat(uchar * param_1, ImageFormat param_2, uchar * param_3, ImageFormat param_4, int param_5, int param_6, int param_7, int param_8) = 0;
    virtual undefined OnDrawMesh(IMesh * param_1, int param_2, int param_3) = 0;
    virtual undefined OnDrawMesh(IMesh * param_1, CPrimList * param_2, int param_3) = 0;
    virtual undefined OnSetFlexMesh(IMesh * param_1, IMesh * param_2, int param_3) = 0;
    virtual undefined OnSetColorMesh(IMesh * param_1, IMesh * param_2, int param_3) = 0;
    virtual undefined OnSetPrimitiveType(IMesh * param_1, MaterialPrimitiveType_t param_2) = 0;
    virtual undefined SyncMatrices(void) = 0;
    virtual undefined SyncMatrix(MaterialMatrixMode_t param_1) = 0;
    virtual undefined OnFlushBufferedPrimitives(void) = 0;
    virtual undefined OnThreadEvent(uint param_1) = 0;
    virtual undefined BindStandardTexture(Sampler_t param_1, StandardTextureId_t param_2) = 0;
    virtual undefined BindStandardVertexTexture(VertexTextureSampler_t param_1, StandardTextureId_t param_2) = 0;
    virtual undefined GetLightmapDimensions(int * param_1, int * param_2) = 0;
    virtual undefined GetStandardTextureDimensions(int * param_1, int * param_2, StandardTextureId_t param_3) = 0;
    virtual undefined GetBoundMorphFormat(void) = 0;
    virtual undefined GetRenderTargetEx(int param_1) = 0;
    virtual undefined DrawClearBufferQuad(uchar param_1, uchar param_2, uchar param_3, uchar param_4, bool param_5, bool param_6, bool param_7) = 0;
    virtual undefined MaxHWMorphBatchCount(void) = 0;
    virtual undefined GetCurrentColorCorrection(ShaderColorCorrectionInfo_t * param_1) = 0;
};

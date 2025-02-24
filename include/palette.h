#ifndef GUARD_PALETTE_H
#define GUARD_PALETTE_H

#define gPaletteFade_selectedPalettes (gPaletteFade.multipurpose1) // normal and fast fade
#define gPaletteFade_blendCnt         (gPaletteFade.multipurpose1) // hardware fade
#define gPaletteFade_delay            (gPaletteFade.multipurpose2) // normal and hardware fade
#define gPaletteFade_submode          (gPaletteFade.multipurpose2) // fast fade

#define PLTT_BUFFER_SIZE (PLTT_SIZE / sizeof(u16))

#define PALETTE_FADE_STATUS_DELAY 2
#define PALETTE_FADE_STATUS_ACTIVE 1
#define PALETTE_FADE_STATUS_DONE 0
#define PALETTE_FADE_STATUS_LOADING 0xFF

#define PALETTES_BG      0x0000FFFF
// like PALETTES_BG but excludes UI pals [13, 15]
#define PALETTES_MAP     0x00001FFF
#define PALETTES_OBJECTS 0xFFFF0000
#define PALETTES_ALL     (PALETTES_BG | PALETTES_OBJECTS)

#define PLTT_ID(n) ((n) * 16)
#define BG_PLTT_OFFSET 0x000
#define OBJ_PLTT_OFFSET 0x100
#define BG_PLTT_ID(n) (BG_PLTT_OFFSET + PLTT_ID(n))
#define OBJ_PLTT_ID(n) (OBJ_PLTT_OFFSET + PLTT_ID(n))
#define OBJ_PLTT_ID2(n) (PLTT_ID((n) + 16))

// Used to determine whether a sprite palette tag
// should be excluded from time (and weather) blending
#define BLEND_IMMUNE_FLAG (1 << 15)
#define IS_BLEND_IMMUNE_TAG(tag) ((tag) & BLEND_IMMUNE_FLAG)

enum
{
    FAST_FADE_IN_FROM_WHITE,
    FAST_FADE_OUT_TO_WHITE,
    FAST_FADE_IN_FROM_BLACK,
    FAST_FADE_OUT_TO_BLACK,
};

struct BlendSettings {
  u32 blendColor:24;
  u32 isTint:1;
  u32 coeff:5;
};

struct PaletteFadeControl
{
    u32 multipurpose1; // This field needs to exist or errors will occur
    // These three are only used for TOD blending
    struct BlendSettings *bld0;
    struct BlendSettings *bld1;
    u16 weight:9; // [0, 256], so must be 9 bits
    u8 delayCounter:6;
    u16 y:5; // blend coefficient
    u16 targetY:5; // target blend coefficient
    u16 blendColor:15;
    bool16 active:1;
    u16 multipurpose2:6;
    bool16 yDec:1; // whether blend coefficient is decreasing
    bool16 bufferTransferDisabled:1;
    u16 mode:2;
    bool16 shouldResetBlendRegisters:1;
    bool16 hardwareFadeFinishing:1;
    u16 softwareFadeFinishingCounter:5;
    bool16 softwareFadeFinishing:1;
    bool16 objPaletteToggle:1;
    u8 deltaY:4; // rate of change of blend coefficient
};

extern const struct BlendSettings gTimeOfDayBlend[];

extern struct PaletteFadeControl gPaletteFade;
extern u32 gPlttBufferTransferPending;
extern u16 ALIGNED(4) gPlttBufferUnfaded[PLTT_BUFFER_SIZE];
extern u16 ALIGNED(4) gPlttBufferFaded[PLTT_BUFFER_SIZE];

void LoadCompressedPalette(const u32 *src, u32 offset, u32 size);
void LoadPalette(const void *src, u32 offset, u32 size);
void LoadPaletteFast(const void *src, u32 offset, u32 size);
void FillPalette(u32 value, u32 offset, u32 size);
void TransferPlttBuffer(void);
u32 UpdatePaletteFade(void);
u32 PrevPaletteFadeResult(void); // Battle Speed Up
void ResetPaletteFade(void);
bool32 BeginNormalPaletteFade(u32 selectedPalettes, s8 delay, u8 startY, u8 targetY, u32 blendColor);
bool32 BeginTimeOfDayPaletteFade(u32, s8, u8, u8, struct BlendSettings *, struct BlendSettings *, u32, u32);
void PaletteStruct_ResetById(u32 id);
void ResetPaletteFadeControl(void);
void InvertPlttBuffer(u32 selectedPalettes);
void TintPlttBuffer(u32 selectedPalettes, s8 r, s8 g, s8 b);
void UnfadePlttBuffer(u32 selectedPalettes);
void BeginFastPaletteFade(u32 submode);
void BeginHardwarePaletteFade(u32 blendCnt, u32 delay, u32 y, u32 targetY, u32 shouldResetBlendRegisters);
void BlendPalettes(u32 selectedPalettes, u8 coeff, u32 color);
void BlendPalettesFine(u32 palettes, u16 *src, u16 *dst, u32 coeff, u32 color);
void BlendPalettesUnfaded(u32 selectedPalettes, u8 coeff, u32 color);
void BlendPalettesGradually(u32 selectedPalettes, s8 delay, u8 coeff, u8 coeffTarget, u16 color, u8 priority, u8 id);
void TimeBlendPalette(u16 palOffset, u32 coeff, u32 blendColor);
void TintPalette_RGB_Copy(u16 palOffset, u32 blendColor);
void TimeMixPalettes(u32, u16 *, u16 *, struct BlendSettings *, struct BlendSettings *, u16);
void AvgPaletteWeighted(u16 *src0, u16 *src1, u16 *dst, u16 weight0);
void TintPalette_GrayScale(u16 *palette, u32 count);
void TintPalette_GrayScale2(u16 *palette, u32 count);
void TintPalette_SepiaTone(u16 *palette, u32 count);
void TintPalette_CustomTone(u16 *palette, u32 count, u16 rTone, u16 gTone, u16 bTone);

static inline void SetBackdropFromColor(u32 color)
{
  FillPalette(color, 0, PLTT_SIZEOF(1));
}

static inline void SetBackdropFromPalette(const u16 *palette)
{
  LoadPalette(palette, 0, PLTT_SIZEOF(1));
}

#endif // GUARD_PALETTE_H

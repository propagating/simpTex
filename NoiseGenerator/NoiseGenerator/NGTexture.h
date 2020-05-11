#pragma once
class NGTexture
{
private:

    int m_iTextureID;

public:

    NGTexture(int iTextureID) { m_iTextureID = iTextureID; }
    ~NGTexture() {}

    int Get_ID() { return m_iTextureID; }

    virtual void Generate_SimplexNoise(float fNoiseResolution, float fNoiseIntensity) = 0;
    virtual void Generate_PerlinNoise(float fNoiseResolution, float fNoiseIntensity) = 0;
    virtual void Generate_IrregularStructuredNoise() = 0;
    virtual void Generate_WorleyNoise() = 0;
    virtual void Generate_AnisotropicDiffusion() = 0;

    virtual bool GetAs_RawData(void* aBuffer) = 0;
    virtual bool GetAs_PNGFile(const char* aFilePath) = 0;
};

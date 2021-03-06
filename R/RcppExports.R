# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

CreateTexture2D <- function(szFormat, iWidth, iHeight) {
    .Call(`_simpTex_CreateTexture2D`, szFormat, iWidth, iHeight)
}

CreateTextureOnImage2D <- function(szFormat, szPNGFile) {
    .Call(`_simpTex_CreateTextureOnImage2D`, szFormat, szPNGFile)
}

SaveTextureToFile <- function(iTextureID, szFile) {
    .Call(`_simpTex_SaveTextureToFile`, iTextureID, szFile)
}

Generate_SimplexNoise <- function(iTextureID, fNoiseResolution, fNoiseIntensity) {
    .Call(`_simpTex_Generate_SimplexNoise`, iTextureID, fNoiseResolution, fNoiseIntensity)
}

Generate_PerlinNoise <- function(iTextureID, fNoiseResolution, fNoiseIntensity) {
    .Call(`_simpTex_Generate_PerlinNoise`, iTextureID, fNoiseResolution, fNoiseIntensity)
}

Generate_WorleyNoise <- function(iTextureID, iPoints, szColorFunc, szDistanceFunc, fNoiseIntensity) {
    .Call(`_simpTex_Generate_WorleyNoise`, iTextureID, iPoints, szColorFunc, szDistanceFunc, fNoiseIntensity)
}

Generate_ReactionDiffusion <- function(iTextureID, iIterations, iSpawnPoints, fNoiseIntensity) {
    .Call(`_simpTex_Generate_ReactionDiffusion`, iTextureID, iIterations, iSpawnPoints, fNoiseIntensity)
}


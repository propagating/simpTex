## Use

1. Create a new texture and store the textureId
    Color Type : Only "RGBA" Supported
    Image Width : Width of texture
    Image Height : Heigh of texture

textureId = CreateTexture2D("RGBA", imageWidth, imageHeight);

2. Generate a texture, passing in texture id and other parameters

### Perlin Noise
    Resolution : is the scale that you want the texture generated, the higher the value the smaller the features (0.0-999.0)
    Alpha : How dark you want the features. Low alpha makes them almost transparent (0.0-1.0)

Generate_PerlinNoise(textureId, textureResoltuion, textureAlpha);

### Simplex Noise
    Resolution : is the scale that you want the texture generated, the higher the value the smaller the features (0.0-999.0)
    Alpha : How dark you want the features. Low alpha makes them almost transparent (0.0-1.0)

Generate_SimplexNoise(textureId, textureResoltuion, textureAlpha);

### Worley Noise
    Number of Points : How many points to display
    Color Functions : Linear, Tan, Minty, Xor, Mod, And Sin
    Distance Functions : Euclidean, Chebyshev, Manhattan, OrthoEuclidean, OrthoManhattan, OrthoChebyshev
    Alpha : How dark you want the features. Low alpha makes them almost transparent (0.0-1.0)
    
Generate_WorleyNoise(textureId, numberPoints, colorFunction, distanceFunction, textureAlpha);


### ReactionDiffusion Noise
    Number of Iterations : More iterations, the more each point will have a chance to spread. WARNING: HIGH ITERATIONS ARE COMPUTATIONALLY EXPENSIVE
    Number of Points : How many points to display. WARNING: HIGH POINTS AND HIGH ITERATIONS ARE COMPUTATIONALLY EXPENSIVE
    Alpha : How dark you want the features. Low alpha makes them almost transparent (0.0-1.0)
    
Generate_ReactionDiffusion(textureId, numberIterations, numberPoints, 0.5f);



3. Save texture
    Image Name : Full File Path ex. "C:/directory/filename.png", directory must previousl exist, filename must include ".png"
        SaveTextureToFile(textureId, imageName);
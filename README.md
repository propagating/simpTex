## Installation And First Run

        //To install the latest version from Github:
        
        install.packages("devtools") # May need to uninstall and reinstall
        devtools::install_github("propagating/simpTex")
        library(simpTex)
        texid = CreateTexture2D("RGBA32", 512,512)
        Generate_WorleyNoise(texid, 10, "Minty", "OrthoEuclidean", 1.0)
        SaveTextureToFile(texid, "C:/OrthoSample.png") # update filepath
        
![Worley Image Sample Output](https://i.imgur.com/cWGJ3JX.png)

## Creating Textures

1. Create a new texture and store the textureId
    
        //Color Type : Only "RGBA32" Supported
        //Image Width : Width of texture
        //Image Height : Heigh of texture

        textureId = CreateTexture2D("RGBA32", imageWidth, imageHeight);

2. Generate a texture, passing in texture id and other parameters

### Perlin Noise
        //Resolution : is the scale that you want the texture generated, the higher the value the smaller the features (0.0-999.0)
        //Alpha : How dark you want the features. Low alpha makes them almost transparent (0.0-1.0)

        Generate_PerlinNoise(textureId, textureResoltuion, textureAlpha);

### Simplex Noise
        //Resolution : is the scale that you want the texture generated, the higher the value the smaller the features (0.0-999.0)
        //Alpha : How dark you want the features. Low alpha makes them almost transparent (0.0-1.0)

        Generate_SimplexNoise(textureId, textureResoltuion, textureAlpha);
        
### Worley Noise
        //Number of Points : How many points to display
        //Color Functions : "Linear", "Tan", "Minty", "Xor", "Mod", "And", "Sin"
        //Distance Functions : "Euclidean", "Chebyshev", "Manhattan", "OrthoEuclidean", "OrthoManhattan", "OrthoChebyshev"
        //Alpha : How dark you want the features. Low alpha makes them almost transparent (0.0-1.0)

        Generate_WorleyNoise(textureId, numberPoints, colorFunction, distanceFunction, textureAlpha);

### ReactionDiffusion Noise
        //Number of Iterations : More iterations, the more each point will have a chance to spread. WARNING: HIGH ITERATIONS ARE COMPUTATIONALLY EXPENSIVE
        //Number of Points : How many points to display. WARNING: HIGH POINTS AND HIGH ITERATIONS ARE COMPUTATIONALLY EXPENSIVE
        //Alpha : How dark you want the features. Low alpha makes them almost transparent (0.0-1.0)

        Generate_ReactionDiffusion(textureId, numberIterations, numberPoints, 0.5f);

3. Save texture

        //Image Name : Full File Path ex. "C:/directory/filename.png", directory must previousl exist, filename must include ".png"

        SaveTextureToFile(textureId, imageName);
        
        
## Generated Samples

The album contains samples of each generation algorithm, varying resolution, iterations, and points from small to large values with an Alpha of 1. There are multiple Worley samples covering distance and color function measures. The R Code is listed in the image descriptions.

<a href="//imgur.com/a/b3xK14y">Texture Generation Album</a>

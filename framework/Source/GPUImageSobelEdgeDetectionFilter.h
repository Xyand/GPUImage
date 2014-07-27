#import "GPUImageTwoPassFilter.h"

@interface GPUImageSobelEdgeDetectionFilter : GPUImageTwoPassFilter
{
    GLint texelWidthUniform, texelHeightUniform, edgeStrengthUniform, powerUniform;
//    GLfloat ;
    
    BOOL hasOverriddenImageSizeFactor;
}

// The texel width and height factors tweak the appearance of the edges. By default, they match the inverse of the filter size in pixels
@property(readwrite, nonatomic) CGFloat texelWidth; 
@property(readwrite, nonatomic) CGFloat texelHeight; 

// The filter strength property affects the dynamic range of the filter. High values can make edges more visible, but can lead to saturation. Default of 1.0.
@property(readwrite, nonatomic) CGFloat edgeStrength;

// Indicates if needs to avoid taking square root of the result
@property(readwrite, nonatomic) BOOL isSquared;

@end

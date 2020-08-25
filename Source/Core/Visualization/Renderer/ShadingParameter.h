/****************************************************************************/
/**
 *  @file   ShadingParameter.h
 *  @author Naohisa Sakamoto
 */
/****************************************************************************/
#pragma once
#include <string>
#include <kvs/Shader>


namespace kvs
{

class ProgramObject;
class ShaderSource;

class ShadingParameter
{
public:
    enum Type
    {
        UnknownShading = 0, ///< unknown shading type
        LambertShading,     ///< Lambertian shading
        PhongShading,       ///< Phong shading
        BlinnPhongShading   ///< Blinn-Phong shading
    };

private:
    float m_Ka; ///< ambient coefficient
    float m_Kd; ///< diffuse coefficient
    float m_Ks; ///< specular coefficient
    float m_S;  ///< shininess

    Type m_type;

public:
    static ShadingParameter Lambert( float ka, float kd );
    static ShadingParameter Phong( float ka, float kd, float ks, float s );
    static ShadingParameter BlinnPhong( float ka, float kd, float ks, float s );

public:
    ShadingParameter();
    explicit ShadingParameter( const kvs::Shader::Base& shader );

public:
    void apply( ProgramObject& program, const std::string& var_name ) const;
    void defineMacro( ShaderSource& frag ) const;
};

} // end of namespace kvs

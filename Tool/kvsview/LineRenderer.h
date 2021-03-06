/*****************************************************************************/
/**
 *  @file   LineRenderer.h
 *  @author Naohisa Sakamoto
 */
/*****************************************************************************/
#pragma once
#include <string>
#include <kvs/CommandLine>
#include <kvs/Program>
#include "Argument.h"


namespace kvsview
{

namespace LineRenderer
{

const std::string CommandName("LineRenderer");
const std::string Description("Rendering a line object. (optional)");

/*===========================================================================*/
/**
 *  Argument class for LineRenderer.
 */
/*===========================================================================*/
class Argument : public kvsview::Argument::Common
{
public:
    Argument( int argc, char** argv );
};

/*===========================================================================*/
/**
 *  Main class for LineRenderer.
 */
/*===========================================================================*/
class Main : public kvs::Program
{
private:
    std::string m_input_name; ///< input filename
    std::string m_output_name; ///< output filename

public:
    int exec( int argc, char** argv );
};

} // end of namespace LineRenderer

} // end of namespace kvsview

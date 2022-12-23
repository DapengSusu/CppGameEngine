#include "BaseApplication.hpp"

// Parse command line, read configuration, initialize all sub modules
int Jumper::BaseApplication::Initialize()
{
    m_bQuit = false;

    return 0;
}

// Finalize all sub modules and clean up all runtime temporary files.
void Jumper::BaseApplication::Finalize()
{
}

// One cycle of the main loop
void Jumper::BaseApplication::Tick()
{
}

bool Jumper::BaseApplication::IsQuit()
{
    return m_bQuit;
}

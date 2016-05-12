#ifndef CGAME_CG_MOLOTOV_H
#define CGAME_CG_MOLOTOV_H

namespace molotov {

///////////////////////////////////////////////////////////////////////////////

void restart();
void shutdown();

void draw( centity_t& );
void populatePolyBuffers();

///////////////////////////////////////////////////////////////////////////////

} // namespace molotov

#endif // CGAME_CG_MOLOTOV_H
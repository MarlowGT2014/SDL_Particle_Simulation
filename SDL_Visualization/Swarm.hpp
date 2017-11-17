#ifndef SWARM_H_
#define SWARM_H_

#include "Particle.hpp"

namespace caveofprogramming {
    
    class Swarm {
    public:
        const static int NPARTICLES = 4000;
        
    private:
        Particle * m_pParticles;
        int lastTime;
        
    public:
        Swarm();
        virtual ~Swarm();
        void update(int elapsed);
        
        const Particle * const getParticles() { return m_pParticles; };
    };
    
}

#endif /* SWARM_H_ */

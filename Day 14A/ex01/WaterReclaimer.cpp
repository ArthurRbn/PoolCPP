
#include <iostream>
#include "Errors.hpp"
#include "WaterReclaimer.hpp"

WaterReclaimer::WaterReclaimer()
    : _water(0),
      _started(false)
{
}

void WaterReclaimer::start()
{
    if (_water < 100)
        throw MissionCriticalError("Not enough water to achieve the mission.", "WaterReclaimer");
    _started = true;
}

void WaterReclaimer::useWater(int water)
{
    if (water < 0)
        throw UserError("Water use should be positif.", "WaterReclaimer");
    else if (!_started)
        throw UserError("Cannot use water if the reclaimer hasn't started.", "WaterReclaimer");
    else if ((_water - water) < 10 || water > _water)
        throw LifeCriticalError("Cannot use water, not enough in the reclaimer.", "WaterReclaimer");
    _water -= water;
}

void WaterReclaimer::generateWater()
{
    if (_water == 100)
        throw NasaError("Cannot generate water, reclaimer already full.", "WaterReclaimer");
    _water += 10;
}

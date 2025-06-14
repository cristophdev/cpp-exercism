#ifndef LASAGNA_H
#define LASAGNA_H

namespace lasagna
{
  int ovenTime();
  int remainingOvenTime(int actualMinutesInOve);
  int preparationTime(int numberOfLayers);
  int elapsedTime(int numberOfLayers, int actualMinutesInOven);
} // namespace lasagna

#endif
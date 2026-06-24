#include <iostream>
#include "analyzer.h"

int main() {
    std::cout << "Starting MusicAnalyzer..." << std::endl;

    AudioAnalyzer analyzer;
    analyzer.initializePipeline("test_track.wav");

    return 0;
}
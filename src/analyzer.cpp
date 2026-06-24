#include "analyzer.h"
#include <iostream>

AudioAnalyzer::AudioAnalyzer() {
    std::cout << "AudioAnalyzer: initialized" << std::endl;
}

AudioAnalyzer::~AudioAnalyzer() {
    std::cout << "AudioAnalyzer: destroyed" << std::endl;
}

void AudioAnalyzer::initializePipeline(const std::string& filePath) {
    std::cout << "AudioAnalyzer: prepping pipeline for file: " << filePath << std::endl;
}
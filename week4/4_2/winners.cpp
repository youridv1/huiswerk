#include "winners.hpp"

float nearestScore2Average(const vector<float>& scores) {
	float count = 0;
	float total = 0;
	int index;
	vector<float> punten = scores;
	for(size_t i = 0; i < scores.size(); i++) {
		total += scores[i];
		count++;
	}
	float average = total / count;
	for(size_t j=0; j < scores.size(); j++) {
		punten[j] = abs(punten[j] - average);
	}
	float minimum = punten[0];
	for(size_t k=1; k < punten.size(); k++) {
		if(punten[k] < minimum) {
			index = k;
		}
	}
	return scores[index];
}

float distanceFirstLast(const vector<float>& scores) {
	float maximum = scores[0];
	float minimum = scores[0];
	for(size_t l=1; l < scores.size(); l++) {
		if(scores[l] > maximum) {
			maximum = scores[l];
		}
		if(scores[l] < minimum) {
			minimum = scores[l];
		}
	}
	return maximum - minimum;
}

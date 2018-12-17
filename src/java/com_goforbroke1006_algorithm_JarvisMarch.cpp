#include <vector>

#include "../../include/java/com_goforbroke1006_algorithm_JarvisMarch.h"

JNIEXPORT jdoubleArray JNICALL Java_com_goforbroke1006_algorithm_JarvisMarch_jarvisMarch
        (JNIEnv *env, jclass, jdoubleArray) {
    std::vector<double> results;
    results.push_back(1.0);
    results.push_back(2.0);

    jdoubleArray output = env->NewDoubleArray(results.size());
    env->SetDoubleArrayRegion(output, 0, results.size(), results.data());
    return output;
}
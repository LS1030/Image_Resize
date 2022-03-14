/**
 * @file main.cpp
 * @date 2022/3/1
 * @author L.S.
*/

#include <string>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
  const string image_input_path = "../Source/Image/input_image.jpg";
  const string image_output_256x256_path = "../Result/Image/image_256x256.jpg";
  const string image_output_512x512_path = "../Result/Image/image_512x512.jpg";
  const string image_output_1024x576_path = "../Result/Image/image_1024x576.jpg";
  const string image_output_1024x1024_path = "../Result/Image/image_1024x1024.jpg";
  const string image_output_480x240_path = "../Result/Image/image_480x240.jpg";
  const string image_output_960x480_path = "../Result/Image/image_960x480.jpg";

  cv::Mat raw_image = cv::imread(image_input_path);
  cv::Mat image_512x512, image_256x256, image_1024x1024, image_1024x576, image_480x240, image_960x480;

  cv::resize(raw_image, image_256x256, cv::Size(256,256));
  cv::resize(raw_image, image_512x512, cv::Size(512,512));
  cv::resize(raw_image, image_1024x1024, cv::Size(1024,1024));
  cv::resize(raw_image, image_1024x576, cv::Size(1024,576));
  cv::resize(raw_image, image_480x240, cv::Size(480,240));
  cv::resize(raw_image, image_960x480, cv::Size(960,480));

  cv::imwrite(image_output_256x256_path, image_256x256);
  cv::imwrite(image_output_512x512_path, image_512x512);
  cv::imwrite(image_output_1024x1024_path, image_1024x1024);
  cv::imwrite(image_output_1024x576_path, image_1024x576);
  cv::imwrite(image_output_480x240_path, image_480x240);
  cv::imwrite(image_output_960x480_path, image_960x480);

  return 0;
}

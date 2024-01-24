#include "daisy_seed.h"
#include "daisysp.h"
#include "daisy_pod.h"
#include "lcdlib/ili9341_ui_driver.cpp"

using namespace daisy;
using namespace daisysp;

DaisySeed hw;
UiDriver driver;
/*
void AudioCallback(AudioHandle::InputBuffer in, AudioHandle::OutputBuffer out, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		out[0][i] = in[0][i];
		out[1][i] = in[1][i];
	}
}
*/
int main(void)
{
	hw.Init(true);
	//hw.SetAudioBlockSize(4); // number of samples handled per callback
	//hw.SetAudioSampleRate(SaiHandle::Config::SampleRate::SAI_48KHZ);
	//hw.StartAudio(AudioCallback);

	//hw.Init(true);
  	driver.Init();

  // Here all the drawing happening in the memory buffer, so no drawing happening at this point. 
  driver.Fill(COLOR_BLACK);
  driver.FillRect(Rectangle(100, 100, 50, 50), COLOR_RED);
  driver.DrawRect(Rectangle(100, 100, 50, 50), COLOR_RED);

  while(1)
  {
        // Update() is required to actually flush the screen buffer to the display
        driver.Update();
		driver.Fill(COLOR_BLACK);
  driver.FillRect(Rectangle(100, 100, 50, 50), COLOR_RED);
  driver.DrawRect(Rectangle(100, 100, 50, 50), COLOR_RED);
		
		
  }

	//while(1) {}
}

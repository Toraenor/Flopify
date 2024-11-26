#pragma once
#include "SoundManager.h"

namespace Flopify {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Flopify
	/// </summary>
	public ref class Flopify : public System::Windows::Forms::Form
	{
	public:
		Flopify(void)
		{
			InitializeComponent();

			musicNames = gcnew System::Collections::Generic::List<String^>();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Flopify()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ addToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;



	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;



	private: System::Collections::Generic::List<String^>^ musicNames;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::TrackBar^ trackPlayBar;

	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::PictureBox^ playBtn;
	private: System::Windows::Forms::PictureBox^ pauseResumeBtn;
	private: System::Windows::Forms::PictureBox^ stopBtn;
	private: System::Windows::Forms::PictureBox^ volumeIcon;






	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::TrackBar^ volumeBar;

		   bool test = false;






	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Flopify::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->playBtn = (gcnew System::Windows::Forms::PictureBox());
			this->pauseResumeBtn = (gcnew System::Windows::Forms::PictureBox());
			this->stopBtn = (gcnew System::Windows::Forms::PictureBox());
			this->trackPlayBar = (gcnew System::Windows::Forms::TrackBar());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->volumeIcon = (gcnew System::Windows::Forms::PictureBox());
			this->volumeBar = (gcnew System::Windows::Forms::TrackBar());
			this->menuStrip1->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->playBtn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pauseResumeBtn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->stopBtn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackPlayBar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->volumeIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->volumeBar))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menuToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1190, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->openToolStripMenuItem,
					this->addToolStripMenuItem, this->saveToolStripMenuItem
			});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &Flopify::openToolStripMenuItem_Click);
			// 
			// addToolStripMenuItem
			// 
			this->addToolStripMenuItem->Name = L"addToolStripMenuItem";
			this->addToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->addToolStripMenuItem->Text = L"Add";
			this->addToolStripMenuItem->Click += gcnew System::EventHandler(this, &Flopify::addToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &Flopify::saveToolStripMenuItem_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel1->Location = System::Drawing::Point(644, 27);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(521, 426);
			this->flowLayoutPanel1->TabIndex = 4;
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Controls->Add(this->playBtn);
			this->flowLayoutPanel2->Controls->Add(this->pauseResumeBtn);
			this->flowLayoutPanel2->Controls->Add(this->stopBtn);
			this->flowLayoutPanel2->Location = System::Drawing::Point(210, 374);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Padding = System::Windows::Forms::Padding(3);
			this->flowLayoutPanel2->Size = System::Drawing::Size(332, 68);
			this->flowLayoutPanel2->TabIndex = 5;
			// 
			// playBtn
			// 
			this->playBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"playBtn.BackgroundImage")));
			this->playBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"playBtn.Image")));
			this->playBtn->Location = System::Drawing::Point(6, 6);
			this->playBtn->Name = L"playBtn";
			this->playBtn->Size = System::Drawing::Size(91, 62);
			this->playBtn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->playBtn->TabIndex = 1;
			this->playBtn->TabStop = false;
			this->playBtn->Click += gcnew System::EventHandler(this, &Flopify::Play_Click);
			// 
			// pauseResumeBtn
			// 
			this->pauseResumeBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pauseResumeBtn.Image")));
			this->pauseResumeBtn->Location = System::Drawing::Point(103, 6);
			this->pauseResumeBtn->Name = L"pauseResumeBtn";
			this->pauseResumeBtn->Size = System::Drawing::Size(100, 62);
			this->pauseResumeBtn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pauseResumeBtn->TabIndex = 2;
			this->pauseResumeBtn->TabStop = false;
			this->pauseResumeBtn->Click += gcnew System::EventHandler(this, &Flopify::Pause_Click);
			// 
			// stopBtn
			// 
			this->stopBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"stopBtn.Image")));
			this->stopBtn->Location = System::Drawing::Point(209, 6);
			this->stopBtn->Name = L"stopBtn";
			this->stopBtn->Size = System::Drawing::Size(112, 62);
			this->stopBtn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->stopBtn->TabIndex = 3;
			this->stopBtn->TabStop = false;
			this->stopBtn->Click += gcnew System::EventHandler(this, &Flopify::Stop_Click);
			// 
			// trackPlayBar
			// 
			this->trackPlayBar->Location = System::Drawing::Point(254, 349);
			this->trackPlayBar->Margin = System::Windows::Forms::Padding(0);
			this->trackPlayBar->Name = L"trackPlayBar";
			this->trackPlayBar->Size = System::Drawing::Size(269, 45);
			this->trackPlayBar->TabIndex = 6;
			this->trackPlayBar->TickStyle = System::Windows::Forms::TickStyle::None;
			this->trackPlayBar->Scroll += gcnew System::EventHandler(this, &Flopify::trackBar1_Scroll);
			// 
			// timer1
			// 
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &Flopify::timer1_Tick);
			// 
			// volumeIcon
			// 
			this->volumeIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"volumeIcon.Image")));
			this->volumeIcon->Location = System::Drawing::Point(12, 418);
			this->volumeIcon->Name = L"volumeIcon";
			this->volumeIcon->Size = System::Drawing::Size(35, 35);
			this->volumeIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->volumeIcon->TabIndex = 7;
			this->volumeIcon->TabStop = false;
			// 
			// volumeBar
			// 
			this->volumeBar->Location = System::Drawing::Point(53, 427);
			this->volumeBar->Name = L"volumeBar";
			this->volumeBar->Size = System::Drawing::Size(104, 45);
			this->volumeBar->TabIndex = 8;
			this->volumeBar->TickStyle = System::Windows::Forms::TickStyle::None;
			this->volumeBar->Value = 8;
			// 
			// Flopify
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->ClientSize = System::Drawing::Size(1190, 465);
			this->Controls->Add(this->volumeBar);
			this->Controls->Add(this->volumeIcon);
			this->Controls->Add(this->flowLayoutPanel2);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->trackPlayBar);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Flopify";
			this->Text = L"Flopify";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->flowLayoutPanel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->playBtn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pauseResumeBtn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->stopBtn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackPlayBar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->volumeIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->volumeBar))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Play_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//ResetTrackBar();
		SoundManager::Get().Play("collar.wav");
		//play selected sound
	}
	private: System::Void Pause_Click(System::Object^ sender, System::EventArgs^ e)
	{
		test = !test;
		//pause selected sound
		if (/* sound playing*/ test)
		{
			//pause playing sound
			pauseResumeBtn->Image = Image::FromFile("play.png");
		}
		else
		{
			//resume sound
			pauseResumeBtn->Image = Image::FromFile("pause.png");
		}
	}
	private: System::Void Stop_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//stop selected sound
		//ResetTrackBar();
	}
	private: System::Void addToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Create an OpenFileDialog instance
		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();

		// Configure the dialog to filter for .wav files
		openFileDialog->Filter = "WAV files (*.wav)|*.wav|All files (*.*)|*.*";
		openFileDialog->Title = "Select a WAV File";

		// Show the dialog and check if the user selected a file
		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			// Get the selected file path
			String^ filePath = openFileDialog->FileName;
			String^ fileName = System::IO::Path::GetFileName(filePath);
			musicNames->Add(fileName);

			// Display the file path (example usage)
			//MessageBox::Show("Selected WAV file: " + filePath);

			CreateMusic(fileName);
		}
	}

	private: void CreateMusic(String^ fileName)
	{
		FlowLayoutPanel^ testLayout = gcnew FlowLayoutPanel();
		Label^ label = gcnew Label();
		PictureBox^ pic = gcnew PictureBox();

		pic->Image = Image::FromFile("images.jfif");
		label->Text = fileName;

		testLayout->Name = fileName;
		testLayout->Anchor = AnchorStyles::None;
		testLayout->BackColor = Color::White;
		testLayout->AutoSize = true;

		testLayout->Controls->Add(pic);
		testLayout->Controls->Add(label);

		// Attach the same MouseDown event to the FlowLayoutPanel and its child controls
		testLayout->MouseDown += gcnew MouseEventHandler(this, &Flopify::MusickOnClick);
		pic->MouseDown += gcnew MouseEventHandler(this, &Flopify::MusickOnClick);
		label->MouseDown += gcnew MouseEventHandler(this, &Flopify::MusickOnClick);

		flowLayoutPanel1->Controls->Add(testLayout);
	}

	private: System::Void MusickOnClick(System::Object^ sender, MouseEventArgs^ e)
	{
		FlowLayoutPanel^ clickedPanel = nullptr;

		// Check if the sender is a FlowLayoutPanel or a child control
		if (dynamic_cast<FlowLayoutPanel^>(sender) != nullptr)
		{
			// The sender is the FlowLayoutPanel itself
			clickedPanel = dynamic_cast<FlowLayoutPanel^>(sender);
		}
		else if (dynamic_cast<Control^>(sender) != nullptr)
		{
			// The sender is a child control, get its parent
			Control^ childControl = dynamic_cast<Control^>(sender);
			clickedPanel = dynamic_cast<FlowLayoutPanel^>(childControl->Parent);
		}

		if (clickedPanel != nullptr)
		{
			// Perform actions with the clicked FlowLayoutPanel
			MessageBox::Show("Clicked FlowLayoutPanel: " + clickedPanel->Name);
			clickedPanel->Select();

			// You can now use the filePath to play or process the .wav file
// Example: Load the .wav file using System::Media::SoundPlayer
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer(System::IO::Path::GetFullPath(clickedPanel->Name));
			try
			{
				player->Play(); // Play the .wav file asynchronously
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Error playing file: " + ex->Message);
			}
		}
	}
	private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Create an OpenFileDialog instance
		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();

		// Configure the dialog to filter for .wav files
		openFileDialog->Filter = "TXT Files (*.txt)|*.txt";
		openFileDialog->Title = "Select a TXT File";

		// Show the dialog and check if the user selected a file
		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(openFileDialog->FileName);
			while (!reader->EndOfStream)
			{
				String^ musicName = reader->ReadLine();
				musicNames->Add(musicName);
				CreateMusic(musicName);
			}
			reader->Close();
		}
	}
	private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Create an OpenFileDialog instance
		SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();

		// Configure the dialog to filter for .wav files
		saveFileDialog->Filter = "TXT Files (*.txt)|*.txt";
		saveFileDialog->Title = "Select a TXT File";

		// Show the dialog and check if the user selected a file
		if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter(saveFileDialog->FileName);
			for each (String ^ musicName in musicNames)
			{
				MessageBox::Show(musicName);
				writer->WriteLine(musicName);
			}
			writer->Close();
		}
	}
	private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e)
	{
		// Seek to the selected position
		//mediaPlayer->Ctlcontrols->currentPosition = trackBar1->Value;
	}

	private: void ResetTrackBar(int musicDuration)
	{
		trackPlayBar->Minimum = 0;
		trackPlayBar->Maximum = musicDuration;
		trackPlayBar->Value = 0;
	}

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e)
	{
		// Check if music is playing
		//if (mediaPlayer->playState == WMPLib::WMPPlayState::wmppsPlaying)
		//{
			// Update the TrackBar to reflect the current position
			//trackBar1->Value = static_cast<int>(mediaPlayer->Ctlcontrols->currentPosition);
		//}
	}
};
}

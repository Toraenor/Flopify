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
	/// Description r�sum�e de Flopify
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
		/// Nettoyage des ressources utilis�es.
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


	private: System::Windows::Forms::FlowLayoutPanel^ selectedPanel;

	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::TrackBar^ volumeBar;
	private: System::Windows::Forms::Label^ label1;

		   bool test = false;





	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
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
			this->label1 = (gcnew System::Windows::Forms::Label());
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
			this->openToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &Flopify::openToolStripMenuItem_Click);
			// 
			// addToolStripMenuItem
			// 
			this->addToolStripMenuItem->Name = L"addToolStripMenuItem";
			this->addToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->addToolStripMenuItem->Text = L"Add";
			this->addToolStripMenuItem->Click += gcnew System::EventHandler(this, &Flopify::addToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &Flopify::saveToolStripMenuItem_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->flowLayoutPanel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel1->Location = System::Drawing::Point(644, 40);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(521, 402);
			this->flowLayoutPanel1->TabIndex = 4;
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Controls->Add(this->playBtn);
			this->flowLayoutPanel2->Controls->Add(this->pauseResumeBtn);
			this->flowLayoutPanel2->Controls->Add(this->stopBtn);
			this->flowLayoutPanel2->Location = System::Drawing::Point(229, 374);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Padding = System::Windows::Forms::Padding(3);
			this->flowLayoutPanel2->Size = System::Drawing::Size(332, 68);
			this->flowLayoutPanel2->TabIndex = 5;
			// 
			// playBtn
			// 
			this->playBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"playBtn.BackgroundImage")));
			this->playBtn->Cursor = System::Windows::Forms::Cursors::Hand;
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
			this->pauseResumeBtn->Cursor = System::Windows::Forms::Cursors::Hand;
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
			this->stopBtn->Cursor = System::Windows::Forms::Cursors::Hand;
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
			this->trackPlayBar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->trackPlayBar->Location = System::Drawing::Point(257, 345);
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
			this->volumeIcon->Location = System::Drawing::Point(13, 407);
			this->volumeIcon->Name = L"volumeIcon";
			this->volumeIcon->Size = System::Drawing::Size(35, 35);
			this->volumeIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->volumeIcon->TabIndex = 7;
			this->volumeIcon->TabStop = false;
			// 
			// volumeBar
			// 
			this->volumeBar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->volumeBar->Location = System::Drawing::Point(54, 417);
			this->volumeBar->Name = L"volumeBar";
			this->volumeBar->Size = System::Drawing::Size(104, 45);
			this->volumeBar->TabIndex = 8;
			this->volumeBar->TickStyle = System::Windows::Forms::TickStyle::None;
			this->volumeBar->Value = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Green;
			this->label1->Location = System::Drawing::Point(4, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 46);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Flopify";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Flopify
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->ClientSize = System::Drawing::Size(1190, 465);
			this->Controls->Add(this->label1);
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
		PlayMusic();
	}
	private: System::Void PlayMusic()
	{
		if (selectedPanel != nullptr)
		{
			// Convert System::String^ to a char* using Marshal
			IntPtr ptr = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(System::IO::Path::GetFullPath(selectedPanel->Name));
			char* unmanagedString = static_cast<char*>(ptr.ToPointer());
			//ResetTrackBar();

			if (!SoundManager::Get().Play(unmanagedString))
			{
				MessageBox::Show("couldn't play sound " + selectedPanel->Name);
			}

			// Don't forget to free the memory when done
			System::Runtime::InteropServices::Marshal::FreeHGlobal(ptr);
		}
	}
	private: System::Void Pause_Click(System::Object^ sender, System::EventArgs^ e)
	{
		test = !test;
		//pause selected sound
		if (/* sound playing*/ test)
		{
			//pause playing sound
			pauseResumeBtn->Image = Image::FromFile("resume.png");
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
		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
		openFileDialog->Filter = "WAV files (*.wav)|*.wav|All files (*.*)|*.*";
		openFileDialog->Title = "Select a WAV File";

		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ filePath = openFileDialog->FileName;
			String^ fileName = System::IO::Path::GetFileName(filePath);
			musicNames->Add(fileName);
			CreateMusic(fileName);
		}
	}

	private: void CreateMusic(String^ fileName)
	{
		FlowLayoutPanel^ layoutPanel = gcnew FlowLayoutPanel();
		Label^ label = gcnew Label();
		PictureBox^ pic = gcnew PictureBox();

		pic->Image = Image::FromFile("images.jfif");
		pic->SizeMode = PictureBoxSizeMode::Zoom;
		label->Text = fileName;
		label->ForeColor = Color::White;

		layoutPanel->Name = fileName;
		layoutPanel->Anchor = AnchorStyles::None;
		layoutPanel->BackColor = Color::White;
		layoutPanel->AutoSize = true;
		layoutPanel->BackColor = Color::FromArgb(25, 25, 25);
		layoutPanel->Cursor = Cursors::Hand;

		layoutPanel->Controls->Add(pic);
		layoutPanel->Controls->Add(label);

		// Attach the same MouseDown event to the FlowLayoutPanel and its child controls
		layoutPanel->MouseDown += gcnew MouseEventHandler(this, &Flopify::MusicOnClick);
		pic->MouseDown += gcnew MouseEventHandler(this, &Flopify::MusicOnClick);
		label->MouseDown += gcnew MouseEventHandler(this, &Flopify::MusicOnClick);

		layoutPanel->MouseDoubleClick += gcnew MouseEventHandler(this, &Flopify::PlayMusicDoubleClick);
		pic->MouseDoubleClick += gcnew MouseEventHandler(this, &Flopify::PlayMusicDoubleClick);
		label->MouseDoubleClick += gcnew MouseEventHandler(this, &Flopify::PlayMusicDoubleClick);

		flowLayoutPanel1->Controls->Add(layoutPanel);
	}

	private: System::Void PlayMusicDoubleClick(System::Object^ sender, MouseEventArgs^ e)
	{
		PlayMusic();
	}

	private: System::Void MusicOnClick(System::Object^ sender, MouseEventArgs^ e)
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
			//MessageBox::Show("Clicked FlowLayoutPanel: " + clickedPanel->Name);
			clickedPanel->Select();
			selectedPanel = clickedPanel;
		}
	}
	private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
		openFileDialog->Filter = "TXT Files (*.txt)|*.txt";
		openFileDialog->Title = "Select a TXT File";

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
		SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
		saveFileDialog->Filter = "TXT Files (*.txt)|*.txt";
		saveFileDialog->Title = "Select a TXT File";

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

namespace EventVSBinding
{
    public partial class MainPage : ContentPage
    {
        public MainPage()
        {
            InitializeComponent();
        }

        private void Slider_ValueChanged(object sender, ValueChangedEventArgs e)
        {
            /*Slider slider = sender as Slider;
            if (rotationLabel is not null && slider is not null)
                Slider slider = sender as Slider; */
            
            if (rotationLabel is not null && sender is Slider slider)
            {
                rotationLabel.Rotation = slider.Value;
            }
        }

        private void Button_Clicked(object sender, EventArgs e)
        {
            returnMessage = Message;
        }

        private void Button_Clicked_1(object sender, EventArgs e)
        {

        }

        public string Message { get; set; }

        private string returnMessage;

        public string ReturnMessage {
            get {return returnMessage; }
            set
            {
                returnMessage = value;
                OnPropertyChanged();
            } 
        }
    }
}

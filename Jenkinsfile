pipeline {
  agent any
  stages {
    stage('Burrito') {
      parallel {
        stage('Buld') {
          steps {
            sh 'g++ -Wall Burrito.cpp main.cpp -o bur'
            echo 'Compiled'
          }
        }
        stage('Test') {
          steps {
            sh './bur'
          }
        }
      }
    }
    stage('Deliver') {
      steps {
        echo 'Done'
      }
    }
  }
}
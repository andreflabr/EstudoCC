# Generated by Django 4.2.6 on 2023-11-06 23:41

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('app', '0002_tiposaldo_saldo'),
    ]

    operations = [
        migrations.CreateModel(
            name='Dica',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('texto', models.CharField(max_length=400)),
            ],
        ),
        migrations.CreateModel(
            name='TipoMeta',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('tipo', models.CharField(max_length=50)),
                ('descricao', models.CharField(max_length=50)),
            ],
        ),
        migrations.CreateModel(
            name='Meta',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('tipo_meta', models.ManyToManyField(to='app.tipometa')),
            ],
        ),
    ]
